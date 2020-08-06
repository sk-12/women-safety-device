const int fsensor=A0,buzzer_pin=11;
void setup() {
  
Serial.begin(9600);
pinMode(fsensor,INPUT);
pinMode(buzzer_pin,OUTPUT);
}

void loop() {
  int flsensor=analogRead(fsensor);
  
  if (flsensor>890)
  {
    tone(buzzer_pin,1000,500);//buzzer will start playing at a frequency of 1000hz for 500 ms 
  }
  

}
