/************遥杆数据获取**********/
void get_data(){
  //获取摇杆数据
  Joy_x = 0.000;
  Joy_y = 0.000;
  Joy_x = obj.getJoyX();
  Joy_y = obj.getJoyY();
}
/************摇杆方向标志**********/
int dir_data(){   
  get_data();
  if(Joy_x>-0.500&&Joy_y>0.000&&Joy_x<0.500) return 1;    //Y轴正区域 前进
  if(Joy_x>-0.500&&Joy_y<0.000&&Joy_x<0.500) return 2;    //Y轴负区域 后退
  if(Joy_x>0.000&&Joy_y>-0.500&&Joy_y<0.500) return 3;    //X轴正区域 右转
  if(Joy_x<0.000&&Joy_y>-0.500&&Joy_y<0.500) return 4;    //X轴负区域 左转
  if(Joy_x==0.00&&Joy_y==0.00)               return 5;    //坐标原点
  }


