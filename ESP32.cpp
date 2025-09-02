#define rojo 4
#define amarillo 16
#define verde 0

void setup() {
  // put your setup code here, to run once:
pinMode(rojo, OUTPUT);
pinMode(amarillo, OUTPUT);
pinMode(verde, OUTPUT);
}

void loop() {
  digitalWrite(verde,1);
  delay(5000); // this speeds up the simulation
  digitalWrite(verde,0);
  digitalWrite(amarillo,1);
  delay(5000); // this speeds up the simulation
  digitalWrite(amarillo,0);
  digitalWrite(rojo,1);
  delay(5000); // this speeds up the simulation
  digitalWrite(rojo,0)
}
