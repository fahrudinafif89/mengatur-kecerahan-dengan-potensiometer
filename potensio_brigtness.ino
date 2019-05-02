const int pinPot= A0;
const int led= 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT); //pin analog
  pinMode(9, OUTPUT); //harus menggunakan pin pwm(~)

}

int sensor= 0;
int brightness = 0;

void loop() {
  sensor = analogRead(pinPot); //baca nilai kaki AO
  brightness=map(sensor, 0, 1023, 0, 255); //menentukan brightness led dengan nilai pwm
  analogWrite(led, brightness);
  

}
