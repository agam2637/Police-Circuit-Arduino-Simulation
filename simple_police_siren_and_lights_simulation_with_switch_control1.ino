
int switchPin = 7;
int button = 4; 
int led = 12; 
int ledTwo = 8;
int ledThree = 4;
int ledFour = 2;
int switchTwo = 11;


void setup()
{
  pinMode(switchPin, INPUT);
  pinMode(13, OUTPUT);
  
  pinMode(switchTwo, INPUT);
  pinMode(led, OUTPUT);
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
 
  if (digitalRead(switchPin)){
    for (int sound = 400; sound <= 1000; sound += 10) { 
      tone(13, sound);
      delay(5);
    }//for
    for (int sound2 = 1000; sound2 >= 400; sound2 -= 10) { 
      tone(13, sound2);
      delay(5);
    }//for
  }//if
  else{
    noTone(13);
  }//else
  
  if (digitalRead(switchTwo)){
    digitalWrite(led, HIGH);
    delay(5);
    digitalWrite(led, LOW);
    delay(5);
    
    digitalWrite(ledTwo, HIGH);
    delay(5);
    digitalWrite(ledTwo, LOW);
    delay(5);
    
    digitalWrite(ledThree, HIGH);
    delay(5);
    digitalWrite(ledThree, LOW);
    delay(5);
    
    digitalWrite(ledFour, HIGH);
    delay(5);
    digitalWrite(ledFour, LOW);
    delay(5);
  }//if
  
  
  
  
}