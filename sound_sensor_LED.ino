const int LED = 2;
const int SoundSensor = A0;
const int threshold = 50 ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);

}

void loop() {
   int level = analogRead(SoundSensor);
     Serial.println(level);
 if(level > threshold) {
  digitalWrite(LED, HIGH);
}
else { digitalWrite(LED, LOW);
}
delay(100);
}
