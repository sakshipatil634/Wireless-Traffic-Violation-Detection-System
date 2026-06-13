

#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int V0=000;
int V1=000;
int V2=000;
int V3=000;
int V4=000;
int V5=000;
int a=100;

int tc=0;                                            
                             

double lat_val, lng_val, alt_m_val;
int sensor1=A5;
int sensor2=A4;
int sensor3=A3;
int sensor4=A2;
int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;

SoftwareSerial GPS_SoftSerial(9, 8);/* (Rx, Tx) */
/* Create an object named gps of the class TinyGPSPlus */
TinyGPSPlus gps;      

volatile float minutes, seconds;
volatile int degree, secs, mins;

void setup() {
lcd.begin(16,2);
 Serial.begin(9600);
  GPS_SoftSerial.begin(9600); /* Define baud rate for software serial communication */
  
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT); 
  pinMode(ledPin4, OUTPUT); 
  pinMode(sensor3, INPUT_PULLUP);
  lcd.clear();
  lcd.print("gps gsm- Traffic");
  lcd.setCursor(0,1);
  lcd.print(" control   unit ");
 
  delay(3000);
  lcd.clear();
  
    
     Serial.println("A\r"); 
     delay(5000);
    lcd.clear();
    digitalWrite(ledPin1,HIGH); 
    delay(2000);
 }
 
void loop() { 
   gpssread();
  lcd.clear();
  lcd.setCursor(0,0);
    V1 = analogRead(sensor1);
    V2 = analogRead(sensor2);
    V3 = digitalRead(sensor3);
    if (V2 > 950){
  digitalWrite(ledPin1,HIGH); 
  //delay(10000);
  lcd.clear();
 lcd.setCursor(0,0);
    lcd.print("Accident detect");
   digitalWrite(ledPin1,HIGH); 
   delay(1000);
   sendsms1();
   share();
delay(3000);
  }

  
    if (V1 > 600){
  digitalWrite(ledPin1,HIGH); 
  //delay(10000);
  lcd.clear();
 lcd.setCursor(0,0);
    lcd.print(" Alcohol detect ");
   digitalWrite(ledPin1,HIGH); 
   delay(1000);
   sendsms3();
   share();
delay(3000);
  }

    if (V3 == LOW){
  digitalWrite(ledPin1,HIGH); 
  //delay(10000);
  lcd.clear();
 lcd.setCursor(0,0);
    lcd.print("signal break");
   digitalWrite(ledPin1,HIGH); 
   delay(1000);
   sendsms5();
   share();
delay(3000);
  }
}


void sendsms1()
{
  
  Serial.println("AT+CMGF=1\r");                   //Set the module to SMS mode
  delay(1000);
  Serial.println("AT+CMGS=\"7666820619\"\r");  //Your phone number don't forget to include your country code, example +212123456789"
  delay(1500);
  Serial.print("Accident detect location shared");
  delay(1500);
 Serial.write(0x1A);
   delay(15000);
lcd.clear();
}   

  
 
void sendsms3()
{
  
  Serial.println("AT+CMGF=1\r");                   //Set the module to SMS mode
  delay(1000);
  Serial.println("AT+CMGS=\"7666820619\"\r");  //Your phone number don't forget to include your country code, example +212123456789"
  delay(1500);
  Serial.print("alcohol drunk detect location shared");
  delay(1500);
 Serial.write(0x1A);
   delay(15000);
lcd.clear();
}   
 

void sendsms5()
{
  
  Serial.println("AT+CMGF=1\r");                   //Set the module to SMS mode
  delay(1000);
  Serial.println("AT+CMGS=\"7666820619\"\r");  //Your phone number don't forget to include your country code, example +212123456789"
  delay(1500);
  Serial.print("signal break detect location shared");
  delay(1500);
 Serial.write(0x1A);
   delay(15000);
lcd.clear();
}   

   
 
void gpssread(){
        smartDelay(1000); /* Generate precise delay of 1ms */
        unsigned long start;
        uint8_t hr_val, min_val, sec_val;
        bool loc_valid, alt_valid, time_valid;
        lat_val = gps.location.lat(); /* Get latitude data */
        loc_valid = gps.location.isValid(); /* Check if valid location data is available */
        lng_val = gps.location.lng(); /* Get longtitude data */
        alt_m_val = gps.altitude.meters();  /* Get altitude data in meters */
        alt_valid = gps.altitude.isValid(); /* Check if valid altitude data is available */
        hr_val = gps.time.hour(); /* Get hour */
        min_val = gps.time.minute();  /* Get minutes */
        sec_val = gps.time.second();  /* Get seconds */
        time_valid = gps.time.isValid();  /* Check if valid time data is available */
        if (!loc_valid)
        {          
         lcd.clear();
         lcd.print("traffic  monitor");
         lcd.setCursor(0,1);
         lcd.print(" no gps- detect ");
         delay(1000);
         lcd.clear();
        }
        else
        {
          lcd.clear();
          DegMinSec(lat_val);
          lcd.print(lat_val, 6);
         // lcd.print(" ");
         // lcd.print(degree);
          lcd.setCursor(0,1);
          lcd.println(lng_val, 6);
          //Serial.print("Longitude in Degrees Minutes Seconds : ");
          //Serial.print(degree);
         // Serial.print("\t");
         // Serial.print(mins);
         // Serial.print("\t");
         // Serial.println(secs);
         delay(200);
        
lcd.clear();
        }
        
}

static void smartDelay(unsigned long ms)
{
  unsigned long start = millis();
  do 
  {
    while (GPS_SoftSerial.available())  /* Encode data read from GPS while data is available on serial port */
      gps.encode(GPS_SoftSerial.read());
/* Encode basically is used to parse the string received by the GPS and to store it in a buffer so that information can be extracted from it */
  } while (millis() - start < ms);
}

void DegMinSec( double tot_val)   /* Convert data in decimal degrees into degrees minutes seconds form */
{  
  degree = (int)tot_val;
  minutes = tot_val - degree;
  seconds = 60 * minutes;
  minutes = (int)seconds;
  mins = (int)minutes;
  seconds = seconds - minutes;
  seconds = 60 * seconds;
  secs = (int)seconds;
}


void share(){
  Serial.println("AT+CMGF=1\r");                   //Set the module to SMS mode
   delay(1000);
   Serial.println("AT+CMGS=\"9011984003\"\r");  //Your phone number don't forget to include your country code, example +212123456789"
   delay(1500);
   Serial.print("https://www.google.com/maps/?q=");
   Serial.print(lat_val, 6);
   Serial.print(",");
   Serial.print(lng_val, 6);
   delay(1500);
   Serial.write(0x1A);
   delay(15000);
   Serial.println("AT+CMGF=1\r");                   //Set the module to SMS mode
   delay(1000);
   Serial.println("AT+CMGS=\"7666820619\"\r");  //Your phone number don't forget to include your country code, example +212123456789"
   delay(1500);
   Serial.print("https://www.google.com/maps/?q=");
   Serial.print(lat_val, 6);
   Serial.print(",");
   Serial.print(lng_val, 6);
   delay(1500);
   Serial.write(0x1A);
   delay(15000);
   digitalWrite(ledPin1,LOW); 
//digitalWrite(relay,HIGH); 
}
