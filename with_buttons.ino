int buzzerPin = 9; 
int Button1 = 2;
int Button2 = 3;
int Button3 = 4;
int Button4 = 5;

int B1State = 0;
int B2State = 0;
int B3State = 0;
int B4State = 0;

#define NOTE_E  330
#define NOTE_F  349
#define NOTE_G  392
#define NOTE_A  440

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(Button1, INPUT_PULLUP);
  pinMode(Button2, INPUT_PULLUP);
  pinMode(Button3, INPUT_PULLUP);
  pinMode(Button4, INPUT_PULLUP);
}

void loop() {
  B1State = digitalRead(Button1);
  if (B1State == LOW) { // Active LOW
    tone(buzzerPin, NOTE_E);
  }

  B2State = digitalRead(Button2);
  if (B2State == LOW) { // Active LOW
    tone(buzzerPin, NOTE_F);
  }

  B3State = digitalRead(Button3);
  if (B3State == LOW) { // Active LOW
    tone(buzzerPin, NOTE_G);
  }

  B4State = digitalRead(Button4);
  if (B4State == LOW) { // Active LOW
    tone(buzzerPin, NOTE_A);
  }

  if (B1State == HIGH && B2State == HIGH && B3State == HIGH && B4State == HIGH) {
    noTone(buzzerPin);
  }
}
