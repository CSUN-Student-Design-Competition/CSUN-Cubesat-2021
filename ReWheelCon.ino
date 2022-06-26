volatile byte half_revolutions;
unsigned int rpm;
unsigned long timeold;
float x[] = {0,0,0};
float y[] = {0,0,0};
int k = 0;
float b[] = {0.00024132, 0.00048264, 0.00024132};
float a[] = {1.95558189, -0.95654717};
unsigned long oldt;
unsigned long newt;
void setup() {
  pinMode(9, OUTPUT); //INB
  attachInterrupt(0, magnet_detect, RISING);//Initialize the intterrupt pin (Arduino digital pin 2)
  half_revolutions = 0;
  rpm = 0;
  timeold = 0;
  oldt = 0;
  Serial.begin(115200);
}
void loop() {
 if (half_revolutions >= 20) { 
     rpm = 30*1000/(millis() - timeold)*half_revolutions*1/9.0;
     timeold = millis();
     half_revolutions = 0;
}
 x[0]=rpm;
 y[0] = a[0]*y[1] + a[1]*y[2] + b[0]*x[0] + b[1]*x[1] + b[2]*x[2];
 for(int i = 1; i >= 0; i--){
    x[i+1] = x[i]; // store xi
    y[i+1] = y[i]; // store yi
  }
  k = k+1;
  delay(1);
  Serial.println(y[0], DEC);
  runmotor(2500, rpm);
}

void magnet_detect()
 {
   half_revolutions++;
 }

int speedtopower(double spd){
  
 return (int)(.0435*spd)+57.2;
}

void runmotor(double spd, int senser){
    newt = millis();
    double spdp = spd*spd/senser; 
    double spdi = spdi+(newt-oldt)*spd*spd/senser; 
    oldt=newt;
    analogWrite(9, speedtopower(spdp)+.0065*speedtopower(spdi));
    
 }
