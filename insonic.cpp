int cm = 0;
const int Vermelho = 8;
const int Verde = 9;
const int Azul = 10;

long readUltrasonicDistance(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup() {
  Serial.begin(9600);
  pinMode(Vermelho, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(Azul, OUTPUT);
}

void loop() {
  cm = 0.01723 * readUltrasonicDistance(6, 7);
  Serial.print("Distancia: ");
  Serial.print(cm);
  Serial.println(" cm");

  if (cm <= 5) {
    digitalWrite(Verde, HIGH);
    digitalWrite(Vermelho, LOW);
    digitalWrite(Azul, LOW);
  } else if (cm <= 65) {
    digitalWrite(Verde, LOW);
    digitalWrite(Vermelho, LOW);
    digitalWrite(Azul, HIGH);
  } else {
    digitalWrite(Verde, LOW);
    digitalWrite(Vermelho, HIGH);
    digitalWrite(Azul, LOW);
  }

  delay(100);
}
