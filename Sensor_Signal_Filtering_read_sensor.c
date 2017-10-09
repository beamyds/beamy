#define K 0.45
//filter noise on sensors 
//XXXXXXXXXXXXXXXXXXXXXXXXXXXX

void read_sensor(void){
	uint16_t new_distance = 0;
  	static uint16_t distance = 0;
  
	RTE_Call_read_distance(&new_distance);
  	// Remove noise
  	distance = Kx * new_distance + (1 - K) * distance;
  	
  	RTE_Write_screen_distance(&distance);
}
