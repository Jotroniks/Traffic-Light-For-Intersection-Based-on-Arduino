/*
Designed by Jotroniks
Traffic Control light 
for an intersection
Date:15/12/2023
During SWEP 2.
*/

const int ledPin1 = 0;
const int ledPin2 = 2;
const int ledPin3 = 4;

//second set
const int ledPin4= 1;
const int ledPin5 = 3;
const int ledPin6 = 5;


void setup() {
  // put your setup code here, to run once:
  
  pinMode(ledPin1, OUTPUT); //set to output mode
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
  digitalWrite(ledPin1, LOW); //set to off state
  digitalWrite(ledPin2, LOW); //set to off state
  digitalWrite(ledPin3, LOW); //set to off state
  
  
  //second set
  pinMode(ledPin4, OUTPUT); //set to output mode
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);

  digitalWrite(ledPin4, LOW); //set to off state
  digitalWrite(ledPin5, LOW); //set to off state
  digitalWrite(ledPin6, LOW); //set to off state
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

 //turrn on LED
 digitalWrite(ledPin1, HIGH);
 digitalWrite(ledPin6, HIGH);
 //for 1 second
 delay(1000);
 

// YELLOW
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin5, HIGH);
 // for  second
 delay(400);
  
  
 // RED AND YELLOW
 //turn off
 digitalWrite(ledPin1, LOW);
 digitalWrite(ledPin6, LOW);
 // for 1 second
 //delay(800);
 
 digitalWrite(ledPin2, LOW);
 digitalWrite(ledPin5, LOW);
 // for 1 second
 delay(500);
 
 //GREEN
  digitalWrite(ledPin3, HIGH);
  //second set
  digitalWrite(ledPin4, HIGH);
 //for 1 second
 delay(1000);
 
  //GREEN
  digitalWrite(ledPin3, LOW);
  //second set
  digitalWrite(ledPin4, LOW);
 //for 1 second
 delay(500);
 
// YELLOW
 digitalWrite(ledPin2, HIGH);
 digitalWrite(ledPin5, HIGH);
 delay(400);
 
 digitalWrite(ledPin2, LOW);
 digitalWrite(ledPin5, LOW);
 delay(100);
 
}