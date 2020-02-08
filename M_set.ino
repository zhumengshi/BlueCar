/*********电机引脚初始化***********/
void M_setup() {
  pinMode(L_PWM,OUTPUT);
  pinMode(R_PWM,OUTPUT);
  for(int index=0;index<4;index++){
    pinMode(DIR[index],OUTPUT);
  }
/*********pro_mini模块使用使能**********/ 
  for(int index=0;index<2;index++){
    pinMode(EN[index],OUTPUT);
  }
}
/************电机控制函数***********/
/******<"F":前进；"B":后退；"L":左转；"R":右转；"S":停止>***/
/**********1001*******0110******1010******0101******0000***/
void M_control(int R_speed,int L_speed,bool a,bool b,bool c,bool d){  
    analogWrite(R_PWM,R_speed);
    analogWrite(L_PWM,L_speed);
    digitalWrite(DIR[0],a);
    digitalWrite(DIR[1],b);
    digitalWrite(DIR[2],c);
    digitalWrite(DIR[3],d);
/*********pro_mini模块使用使能**********/
    for(int index=0;index<2;index++){
    digitalWrite(EN[index],HIGH);
  }
}


