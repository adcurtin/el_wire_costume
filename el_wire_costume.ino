const int chest = 2; //A
const int shirt = 3; //B
const int lpant = 4; //C
const int rpant = 5; //D
const int lshoe = 6; //E 
const int rshoe = 7; //F
const int hat = 9;   //G

void setup(){
  pinMode(chest, OUTPUT);
  pinMode(shirt, OUTPUT);
  pinMode(lpant, OUTPUT);
  pinMode(rpant, OUTPUT);
  pinMode(lshoe, OUTPUT);
  pinMode(rshoe, OUTPUT);
  pinMode(hat, OUTPUT);
  
  digitalWrite(chest, HIGH);
}

void loop(){
  digitalWrite(lshoe, HIGH);
  digitalWrite(rshoe, HIGH);
  digitalWrite(hat, HIGH);
  delay(1000);
  digitalWrite(lshoe, LOW);
  digitalWrite(rshoe, LOW);  
  digitalWrite(hat, LOW);
  
  digitalWrite(lpant, HIGH);
  digitalWrite(rpant, HIGH);
  delay(1000);
  digitalWrite(lpant, LOW);
  digitalWrite(rpant, LOW);
  
  digitalWrite(shirt, HIGH);
  delay(1000);
  digitalWrite(shirt, LOW);







}
