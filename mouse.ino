int in1 = 2;
int in2 = 4;
int enA  = 3;

int in3 = 5;
int in4 = 7;
int enB  = 6;

void setup() {

  Serial.begin(9600);

  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}

void loop() {
 
  while(Serial.available() == 0) {

  }
  int mydata = Serial.read();
  Serial.println(mydata);
  if(mydata == 119) {  //w
    forward();
  }
  else if(mydata == 97) { //a
    turnLeft();
  }
  else if(mydata == 100) {
    turnRight();
  }
  else {
    stop();
  }

}

void forward() {

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
}

void stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 0);
  digitalWrite(enB, 0);
}

void turnLeft() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 255);
  digitalWrite(enB, 25); // May need to test ability to turn 
}

void turnRight() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 25);
  digitalWrite(enB, 100); // May need to test ability to turn 
}
