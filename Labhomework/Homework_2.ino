const int knock = A0;
int speakerValue = 0;
int speakerValueLoop =0;
int pushButton =0;
int pinLed = 0;
int button = 2;
unsigned long timeBuzzer = 0;
unsigned long timeCurrentBuzzer = 0;
int buzzerTone = 1;
const int threshold = 0;
const int buzzerOutput = 10;
int preButton = LOW;
int actualButton = HIGH;
int valueButton = 0;


void setup() {
   Serial.begin(9600);
   pinMode(knock,INPUT);
   pinMode(button, INPUT_PULLUP);
   pinMode(buzzerOutput, OUTPUT);
   speakerValue = analogRead(knock);

}


int buttonFunction ()
{
  actualButton = digitalRead(button);
  if(preButton != actualButton)
  return 1;
  return 0;
}

void loop() {


  speakerValueLoop = analogRead(knock); 
  valueButton = buttonFunction(); 
 
 
  noTone(buzzerOutput);
  
  if( speakerValueLoop > speakerValue)
  {
   timeCurrentBuzzer = millis();
  }
  if(millis() >= timeCurrentBuzzer + 500)
  {
     tone(knock, buzzerTone, 5);
    
  

  if(valueButton == 1)
  {
    noTone(buzzerOutput);
  }
  }


 
 // Serial.println(timeBuzzer);
}
