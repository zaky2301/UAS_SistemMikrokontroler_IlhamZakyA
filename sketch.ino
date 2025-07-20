int ledk = 11;
int ledo = 12;
int ledm = 13;
const int trigpin = 10;
const int echopin = 9;
long timer;
int jarak;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledk, OUTPUT);
pinMode(ledo, OUTPUT);
pinMode(ledm, OUTPUT);
pinMode(trigpin, OUTPUT);
pinMode(echopin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigpin, LOW);
delayMicroseconds(2);
digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin, LOW);

timer = pulseIn(echopin,HIGH);
jarak = timer/58;
Serial.println(jarak);
delay(200);

if (jarak >200){
  digitalWrite(ledk, LOW);
} else {
  digitalWrite(ledk, HIGH);
}
if (jarak >100){
  digitalWrite(ledo, LOW);
} else {
  digitalWrite(ledo, HIGH);
}
if (jarak >50){
  digitalWrite(ledm, LOW);
} else {
  digitalWrite(ledm, HIGH);
}

}
