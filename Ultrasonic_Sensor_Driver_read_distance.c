#include "Fmi_Cfg.h" // Ids for <XXX>WriteToSharedObj
#include "ASimSharedObjUtils.h" // <XXX>WriteToSharedObj

void read_distance(int* distance){
  fmi2Integer data;
  
  fmi2IntegerReadFromWriteBuffer(InputId_Ultrasonic_Sensor_Driver_read_distance_0, &data);
  
  *distance = (int) data;
}