const int trigPin = 1;
const int echoPin = 0;
long duration;
int distanceCm, distanceInch;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

}
