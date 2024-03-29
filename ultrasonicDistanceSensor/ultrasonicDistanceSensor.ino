const int trigPin = 11;
const int echoPin = 12;
const int ledGreenPin = 6;
const int ledRedPin = 7;

long duration;
double distanceCm, distanceInch;
const double R1 = 0.01886204;
const double R2 = 0.007426;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledGreenPin, OUTPUT);
  pinMode(ledRedPin, OUTPUT);

  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distanceCm = duration * R1;
  distanceInch = duration * R2;
  Serial.print("Distance: ");
  Serial.print(distanceCm);
  Serial.print(" cm/");
  Serial.print(distanceInch);
  Serial.println(" in");
  delay(1000);

  if (distanceInch < 5) {
    digitalWrite(ledGreenPin, HIGH);
    digitalWrite(ledRedPin, LOW);
  } else {
    digitalWrite(ledGreenPin, LOW);
    digitalWrite(ledRedPin, HIGH);
  }

}
