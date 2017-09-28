#define DISTANCE_MIN 100;
#define DISTANCE_MAX 400;

#define C2 0.0557
#define C1 -4.662
#define  C0 213.08

void compute_angle(void){
	uint16_t distance_to_screen = 0;
   	float motor_angle = 0;
  
  	RTE_Read_screen_distance(&distance_to_screen);
  
  	if(distance_to_screen > DISTANCE_MIN && distance_to_screen < DISTANCE_MAX){
    	motor_angle = C2 * distance_to_screen * distance_to_screen + C1 * distance_to_screen + C0;
    	RTE_Call_set_motor_angle(&motor_angle);
  	}
}