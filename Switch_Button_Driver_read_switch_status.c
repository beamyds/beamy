#include "Fmi_Cfg.h" // Ids for <XXX>WriteToSharedObj
#include "ASimSharedObjUtils.h" // <XXX>WriteToSharedObj

void read_switch_status(uint8_t* status){
  fmi2Integer data;
  
  fmi2IntegerReadFromWriteBuffer(InputId_Inertial_Measurement_Unit_read_accelerometer_0, &data);
  
  *status = (unint8_t) status;
}