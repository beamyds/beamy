#define STATE_READ_DISTANCE 0
#define STATE_ACTIVATE_AF   1

#define STATIBILIZATION_T 	3     // 1500ms

void monitor_movement(void){
	static uint8_t state = STATE_READ_DISTANCE;
  	uint8_t next_state = STATE_READ_DISTANCE;
  
  	static uint8_t previous_distance = 0;
  	uint8_t distance = 0;
  
  	static uint8_t stabilization_counter = 0;
  
  	uint8_t switch_status = 0;
  	uint8_t activation_trigger = 1;
  
  	RTE_Read_switch_status(&switch_status);
  
  	if(!switch_status){
    	previous_distance = 0;
      	stabilization_counter = 0;
      	state = STATE_READ_DISTANCE;
    	return;
  	}
  
  	switch(state){
      case STATE_READ_DISTANCE:
        RTE_Read_screen_distance(&distance);
    	previous_distance = distance;
      
      	// It is moving
      	if(distance != previous_distance){
          stabilization_counter = 0;
          next_state = STATE_READ_DISTANCE;
        } else {
          // Is it stabilized?
          if(stabilization_counter++ >= 3){
            next_state = STATE_ACTIVATE_AF;
          } else {
            next_state = STATE_READ_DISTANCE;
          }
        }
      	break;
      case STATE_ACTIVATE_AF:
      	// Trigger autofocus when projector is stabilized
      	RTE_Write_activation(&activation_trigger);
      	next_state = STATE_READ_DISTANCE;
      	break;
      default:
      	break;
    }
  
  	state = next_state;
}
