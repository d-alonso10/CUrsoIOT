#define rojo 4

void setup() {
  // put your setup code here, to run once:
pinMode(rojo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rojo,1);
  delay(1000); // this speeds up the simulation
  digitalWrite(rojo,0);
  delay(1000); // this speeds up the simulation
}
