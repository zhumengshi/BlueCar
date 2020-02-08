/*************导入库***************/
#include <CtrlApp.h>
CtrlApp obj((HardwareSerial&)Serial, 9600);  //实例化检测对象
/********定义端口（nano）***********
const int L_PWM = 5;               //电机速度端口
const int R_PWM = 6;                
const int DIR[] = {8,9,10,11};     //电机方向端口
float Joy_x, Joy_y;                //手机摇杆数据变量
/********定义端口（pro_mini）***********/
const int L_PWM = 5;               //电机速度端口
const int R_PWM = 6;                
const int DIR[] = {7,8,12,13};     //电机方向端口
const int EN[] = {2,4};            //驱动模块使能
/********全局变量***********/
float Joy_x, Joy_y;                //手机摇杆数据变量
/************函数声明***********/
void M_setup(void);            //电机引脚初始化
void M_control(int R_speed,int L_speed,bool a,bool b,bool c,bool d);//电机控制函数
void get_data(void);           //遥杆数据获取
int dir_data(void);            //摇杆方向标志
void car_control(void);        //小车控制
/*********程序初始化入口*************/
void setup(){
  obj.begin();
  M_setup();
  }
/************主循环*******************/
void loop() {
  obj.routine();    //运行蓝牙摇杆实例
  car_control();
}
/************************************/

