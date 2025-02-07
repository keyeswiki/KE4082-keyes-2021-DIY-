int atomization = 3;  //定义雾化模块连接引脚
void setup() {
  pinMode(atomization, OUTPUT);//设置引脚为输出模式
  digitalWrite(atomization, HIGH);//初始化引脚为高电平   
}

void loop() {
  //开启雾化模块，相当于按键按下
  digitalWrite(atomization, LOW);   
  delay(200);  
  digitalWrite(atomization, HIGH); 
  delay(3000); 
  //关闭雾化模块，按键再次按下
  digitalWrite(atomization, LOW); 
  delay(200); 
  digitalWrite(atomization, HIGH);   
  delay(1000);
}