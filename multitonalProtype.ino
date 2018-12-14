int butt1Pin= 2;
int butt2Pin= 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(butt2Pin, INPUT_PULLUP);//input underscore pulup
  pinMode(butt1Pin, INPUT_PULLUP);//input underscore pulup


}

void loop() {
  // put your main code here, to run repeatedly:

int value1 = digitalRead(butt1Pin);
int value2 = digitalRead(butt2Pin);


Serial.print(value1);
Serial.print(",");
Serial.print(value2);
Serial.println();
delay(10);

}
