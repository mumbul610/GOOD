#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2)
#define maju A0
#define mundur A1
#define kiri A2
#define kanan A3
#define pot A5
#define Ena 1
#define Enb 0
#define in1 9
#define in2 8
#define in3 7
#define in4 6
#define read_ADC;
#define duty_cycle;
#define set=0;

void setup() {
Serial.begin(115200);  // put your setup code here, to run once:
pinMode(pot,INPUT);
pinMode(Ena,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);

lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("CAR");
lcd.setCursor(0,1);
lcd.print("Mumbul610");
delay(1000);
lcd.clear();
}

void loop() {
read_ADC = analogRead(pot);// put your main code here, to run repeatedly:
duty_cycle = map(read_ADC,0,1023,0,100);
analogWrite(Ena,duty_cycle);

lcd.setCursor(0,0);
lcd.print("Duty Cycle: ");
lcd.print(duty_cycle);
lcd.print("% ");

if(digitalRead(maju)==0)(set=1);
if(digitalRead(mundur)==0)(set=0);
if(digitalRead(kanan)==0)(set=1);
if(digitalRead(kiri)==0)(set=0);

lcd.setCursor(0,1);
if(set==0)(lcd.print)("  Maju  ");
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW );
  
if(set==0)(lcd.print)("  Mundur  ");
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH );
  
if(set==0)(lcd.print)("  Kiri  ");
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW );
  
if(set==1)(lcd.print)("  Kanan ");
  digitalWrite(in1, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

delay((50));
}
