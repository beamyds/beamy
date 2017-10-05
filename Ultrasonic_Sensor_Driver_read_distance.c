void read_distance(int* distance){
  fmi2Integer data;
  
  fmi2IntegerReadFromWriteBuffer(InputId_Switch_Button_Driver_read_switch_status_0, &data);
  
  *status = (int) data;
}