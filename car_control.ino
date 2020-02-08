/************小车控制**********/
void car_control(){
  switch (dir_data()){
    case 1:M_control(255*Joy_y,255*Joy_y,1,0,0,1);break;          //前进
    case 2:M_control(255*(-Joy_y),255*(-Joy_y),0,1,1,0);break;    //后退
    case 3:M_control(255*Joy_x,255*Joy_x,0,1,0,1);break;          //原地右转
    case 4:M_control(255*(-Joy_x),255*(-Joy_x),1,0,1,0);break;    //原地左转
    case 5:M_control(0,0,0,0,0,0);break;                          //停止
    } 
  }

