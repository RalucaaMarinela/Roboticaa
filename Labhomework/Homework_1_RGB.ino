const int bluePin = 9;
const int greenPin = 10;
const int redPin = 11;
const int potPinRed = A3;
const int potPinGreen = A2;
const int potPinBlue = A1;
int redValue = 0;
int blueValue = 0;
int greenValue = 0;
int potRedValue =0;
int potGreenValue = 0;
int potBlueValue = 0;


void setup() {
// put your setup code here, to run once:

 pinMode(potPinRed, INPUT);
 pinMode(potPinGreen, INPUT);
 pinMode(potPinBlue, INPUT);
 pinMode(bluePin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(redPin, OUTPUT);
 Serial.begin(9600);
}


void loop() {
// put your main code here, to run repeatedly:

potRedValue = analogRead(potPinRed);
potGreenValue = analogRead(potPinGreen);
potBlueValue = analogRead(potPinBlue);
redValue = map(potRedValue, 0, 1023, 0,255);
greenValue = map(potGreenValue, 0, 1023, 0,255);
blueValue = map(potBlueValue, 0, 1023, 0,255);
analogWrite(redPin, redValue);
analogWrite(greenPin, greenValue);
analogWrite(bluePin, blueValue);


}
