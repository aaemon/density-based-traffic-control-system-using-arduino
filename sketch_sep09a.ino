#include <Servo.h>
int r1 = 2;
int y1 = 3;
int g1 = 4;
int r2 = 7;
int y2 = 8;
int g2 = 9;
int r3 = 22;
int y3 = 23;
int g3 = 38;
int r4 = 12;
int y4 = 40;
int g4 = 41;
int obstaclePin1 = 5;
int obstaclePin2 = 10;
int obstaclePin3 = 25;
int obstaclePin4 = 30;
int hasObstacle1 = HIGH;
int hasObstacle2 = HIGH;
int hasObstacle3 = HIGH;
int hasObstacle4 = HIGH;
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;


void setup() {
  pinMode(r1, OUTPUT);
  pinMode(y1, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(obstaclePin1, INPUT);
  pinMode(r2, OUTPUT);
  pinMode(y2, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(obstaclePin2, INPUT);
  pinMode(r3, OUTPUT);
  pinMode(y3, OUTPUT);
  pinMode(g3, OUTPUT);
  pinMode(obstaclePin3, INPUT);
  pinMode(r4, OUTPUT);
  pinMode(y4, OUTPUT);
  pinMode(g4, OUTPUT);
  pinMode(obstaclePin4, INPUT);
  myservo1.attach(6);
  myservo2.attach(11);
  myservo3.attach(26);
  myservo4.attach(31);
  Serial.begin(9600);  
}

void loop() {
  
  digitalWrite(r4, HIGH);
  digitalWrite(y4, LOW);
  digitalWrite(g4, LOW);
  for (int pos = 90; pos >= 0; pos -= 1) {
    myservo4.write(pos); 
    delay(15);                                  
  }
  Serial.println("Lane 1 is clear...");
  digitalWrite(r1, LOW);
  digitalWrite(y1, LOW);
  digitalWrite(g1, HIGH);
  for (int pos = 0; pos <= 90; pos += 1) {
    myservo1.write(pos); 
    delay(15);                                  
  }
  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);
  myservo2.write(0);
  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  myservo3.write(0);
  delay(7000);

  hasObstacle1 = digitalRead(obstaclePin1);
  while (hasObstacle1 == LOW)
  {
    Serial.println("Lane 1 is clear for extra time as density high...");
    digitalWrite(r1, LOW);
    digitalWrite(y1, LOW);
    digitalWrite(g1, HIGH);
    digitalWrite(r2, HIGH);
    digitalWrite(y2, LOW);
    digitalWrite(g2, LOW);
    digitalWrite(r3, HIGH);
    digitalWrite(y3, LOW);
    digitalWrite(g3, LOW);
    digitalWrite(r4, HIGH);
    digitalWrite(y4, LOW);
    digitalWrite(g4, LOW);
    
    hasObstacle1 = digitalRead(obstaclePin1);
    delay(1000);
  }

  Serial.println("Waiting for change...");
  digitalWrite(r1, LOW);
  digitalWrite(y1, HIGH);
  digitalWrite(g1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(y2, HIGH);
  digitalWrite(g2, LOW);
  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(r4, HIGH);
  digitalWrite(y4, LOW);
  digitalWrite(g4, LOW);
  delay(2000);

  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);
  for (int pos = 90; pos >= 0; pos -= 1) {
    myservo1.write(pos); 
    delay(15);                               
  }
  Serial.println("Lane 2 is clear...");
  digitalWrite(r2, LOW);
  digitalWrite(y2, LOW);
  digitalWrite(g2, HIGH);
  for (int pos = 0; pos <= 90; pos += 1) {
    myservo2.write(pos); 
    delay(15);                                  
  }
  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(r4, HIGH);
  digitalWrite(y4, LOW);
  digitalWrite(g4, LOW);
  delay(7000);
  
  hasObstacle2 = digitalRead(obstaclePin2); 
  while (hasObstacle2 == LOW)
  {
    Serial.println("Lane 2 is clear for extra time as density high...");
    digitalWrite(r1, HIGH);
    digitalWrite(y1, LOW);
    digitalWrite(g1, LOW);
    digitalWrite(r2, LOW);
    digitalWrite(y2, LOW);
    digitalWrite(g2, HIGH);
    digitalWrite(r3, HIGH);
    digitalWrite(y3, LOW);
    digitalWrite(g3, LOW);
    digitalWrite(r4, HIGH);
    digitalWrite(y4, LOW);
    digitalWrite(g4, LOW);
    
    hasObstacle2 = digitalRead(obstaclePin2);
    delay(1000);
  }
  Serial.println("Waiting for change...");
  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(y2, HIGH);
  digitalWrite(g2, LOW);
  digitalWrite(r3, HIGH);
  digitalWrite(y3, HIGH);
  digitalWrite(g3, LOW);
  digitalWrite(r4, HIGH);
  digitalWrite(y4, LOW);
  digitalWrite(g4, LOW);
  delay(2000); 

  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);
  for (int pos = 90; pos >= 0; pos -= 1) {
    myservo2.write(pos); 
    delay(15);                                  
  }
  Serial.println("Lane 3 is clear...");
  digitalWrite(r3, LOW);
  digitalWrite(y3, LOW);
  digitalWrite(g3, HIGH);
  for (int pos = 0; pos <= 90; pos += 1) {
    myservo3.write(pos); 
    delay(15);                                  
  }
  digitalWrite(r4, HIGH);
  digitalWrite(y4, LOW);
  digitalWrite(g4, LOW);
  delay(7000);
  
  hasObstacle3 = digitalRead(obstaclePin3); 
  while (hasObstacle3 == LOW)
  { 
    Serial.println("Lane 3 is clear for extra time as density high...");
    digitalWrite(r1, HIGH);
    digitalWrite(y1, LOW);
    digitalWrite(g1, LOW);
    digitalWrite(r2, HIGH);
    digitalWrite(y2, LOW);
    digitalWrite(g2, LOW);
    digitalWrite(r3, LOW);
    digitalWrite(y3, LOW);
    digitalWrite(g3, HIGH);
    digitalWrite(r4, HIGH);
    digitalWrite(y4, LOW);
    digitalWrite(g4, LOW);
    
    hasObstacle3 = digitalRead(obstaclePin3);
    delay(1000);
  }

  Serial.println("Waiting for change...");
  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(r3, LOW);
  digitalWrite(y3, HIGH);
  digitalWrite(g3, LOW);
  digitalWrite(r4, HIGH);
  digitalWrite(y4, HIGH);
  digitalWrite(g4, LOW);
  delay(2000);

  digitalWrite(r1, HIGH);
  digitalWrite(y1, LOW);
  digitalWrite(g1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  for (int pos = 90; pos >= 0; pos -= 1) {
    myservo3.write(pos); 
    delay(15);                                  
  }
  Serial.println("Lane 4 is clear...");
  digitalWrite(r4, LOW);
  digitalWrite(y4, LOW);
  digitalWrite(g4, HIGH);
  for (int pos = 0; pos <= 90; pos += 1) {
    myservo4.write(pos); 
    delay(15);                                  
  }
  delay(7000);
  
  hasObstacle4 = digitalRead(obstaclePin4); 
  while (hasObstacle4 == LOW)
  {
    Serial.println("Lane 4 is clear for extra time as density high...");
    digitalWrite(r1, HIGH);
    digitalWrite(y1, LOW);
    digitalWrite(g1, LOW);
    digitalWrite(r2, HIGH);
    digitalWrite(y2, LOW);
    digitalWrite(g2, LOW);
    digitalWrite(r3, HIGH);
    digitalWrite(y3, LOW);
    digitalWrite(g3, LOW);
    digitalWrite(r4, LOW);
    digitalWrite(y4, LOW);
    digitalWrite(g4, HIGH);
    
    hasObstacle4 = digitalRead(obstaclePin4);
    delay(1000);
  }

  Serial.println("Waiting for change...");
  digitalWrite(r1, HIGH);
  digitalWrite(y1, HIGH);
  digitalWrite(g1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(y2, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(r3, HIGH);
  digitalWrite(y3, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(r4, LOW);
  digitalWrite(y4, HIGH);
  digitalWrite(g4, LOW);
  delay(2000);
  
}
