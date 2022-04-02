int readPin = A3;
int Volt = 0; 
int DeltaT = 500;
float RV = 0.0;

void setup() {
  // put your setup code here, to run once:
 pinMode(readPin, INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  RV = analogRead(readPin);
 Volt = (5./1023.)*RV; 
 Serial.println(Volt);
 delay(DeltaT);
}
