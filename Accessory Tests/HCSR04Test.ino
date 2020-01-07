const int TrigPin = 2;
const int EchoPin  = 3;
float distance;

void setup() {
  // put your setup code here, to run once:
  //initialization of serial communication and pins
  Serial.begin(9600);
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  Serial.println("Ultrasonic Sensor: ");
}

void loop() {
  // put your main code here, to run repeatedly:
  //Generate a high pule of 10us to trigger the TrigPin
    digitalWrite(TrigPin, LOW);
    delayMicroseconds(2*1);
    digitalWrite(TrigPin, HIGH);
    delayMicroseconds(10*1);
    digitalWrite(TrigPin, LOW);
  //detecting the width of the pulse and calculating the distance
    distance = pulseIn (EchoPin, HIGH);
    distance = distance/57.2555;
    Serial.print(distance);
    Serial.print("cm");
    Serial.println();
    delay(1000);
}
