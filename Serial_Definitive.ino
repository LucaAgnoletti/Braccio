#include <Braccio.h>
#include <Servo.h>
Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_ver;
Servo wrist_rot;
Servo gripper;
//----------------------------------------------------------//
int stepdelay=30;
String M1,M2,M3,M4,M5,M6;
//----------------------------------------------------------//

void setup() {
  //Braccio Initial Position:
  Braccio.begin();
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  //1st MOTOR
    Serial.print("M1......");
  // Read serial input:
  while(Serial.available()==0) {
    }
    M1= Serial.readString();// read the incoming data as string
    Serial.println(M1.toInt());
    //2nd MOTOR
    Serial.print("M2......");
  while(Serial.available()==0) {
    }
    M2= Serial.readString();// read the incoming data as string
    Serial.println(M2.toInt());
    //2nd MOTOR
    Serial.print("M3......");
  while(Serial.available()==0) {
    }
    M3= Serial.readString();// read the incoming data as string
    Serial.println(M3.toInt());//2nd MOTOR
    Serial.print("M4......");
  while(Serial.available()==0) {
    }
    M4= Serial.readString();// read the incoming data as string
    Serial.println(M4.toInt());//2nd MOTOR
    Serial.print("M5......");
  while(Serial.available()==0) {
    }
    M5= Serial.readString();// read the incoming data as string
    Serial.println(M5.toInt());//2nd MOTOR
    Serial.print("M6......");
  while(Serial.available()==0) {
    }
    M6= Serial.readString();// read the incoming data as string
    if (M6.toInt()>73)
    Serial.println(M6.toInt());
}
void loop() {
  //Wait for the user input:
  Braccio.ServoMovement(stepdelay,M1.toInt(),M2.toInt(),M3.toInt(),M4.toInt(),M5.toInt(),M6.toInt()); 
  while(Serial.available()==0) {
    }
  String Motor= Serial.readString();
  if (Motor.toInt()==1){
      while(Serial.available()==0) {
    }
    //1st MOTOR
    Serial.println("M1......");
    M1= Serial.readString();// read the incoming data as string 
    Serial.println(M1.toInt());
  }
  if (Motor.toInt()==2){
      while(Serial.available()==0) {
    }
    //1st MOTOR
    Serial.println("M2......");
    M2= Serial.readString();// read the incoming data as string 
    Serial.println(M1.toInt());
  }
  if (Motor.toInt()==3){
      while(Serial.available()==0) {
    }
    //1st MOTOR
    Serial.println("M3......");
    M3= Serial.readString();// read the incoming data as string 
    Serial.println(M3.toInt());
  }
  if (Motor.toInt()==4){
      while(Serial.available()==0) {
    }
    //1st MOTOR
    Serial.println("M4......");
    M4= Serial.readString();// read the incoming data as string 
    Serial.println(M4.toInt());
  }
  if (Motor.toInt()==5){
      while(Serial.available()==0) {
    }
    //1st MOTOR
    Serial.println("M5......");
    M5= Serial.readString();// read the incoming data as string 
    Serial.println(M5.toInt());
  }
    if (Motor.toInt()==6){
      while(Serial.available()==0) {
    }
    //1st MOTOR
    Serial.println("M6......");
    M6= Serial.readString();// read the incoming data as string 
    Serial.println(M6.toInt());
  }
}
