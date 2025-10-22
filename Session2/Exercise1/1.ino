//ArminRT & Reza Tayebi
int led1 = 12;
int led2 = 13;
int i;
void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}
void loop() {
//ArminRT & Reza Tayebi
for(i=0; i<5; i++) {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
}
//ArminRT & Reza Tayebi
for(i=0; i<5; i++) {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(2000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(2000);
}
//ArminRT & Reza Tayebi
for(i=0; i<5; i++) {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(3000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(3000);
}
}
//ArminRT & Reza Tayebi