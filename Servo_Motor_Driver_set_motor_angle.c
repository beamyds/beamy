#include "Fmi_Cfg.h" // Ids for <XXX>WriteToSharedObj
#include "ASimSharedObjUtils.h" // <XXX>WriteToSharedObj

// void fmi2IntegerWriteToSharedObj(const unsigned int id, const fmi2Integer* pData2);

void set_motor_angle(uint16_t angle){
  	fmi2Integer buf = (fmi2Integer) angle;
  	fmi2IntegerWriteToSharedObj(SharedId_Servo_Motor_Driver_set_motor_angle_0, &buf);
}