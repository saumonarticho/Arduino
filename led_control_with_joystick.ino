int sensorPin = 5; 
int ledPindubas = 4; 
int ledPinduhaut = 7;
int ledPindegauche = 2;
int ledPindedroite = 12;
int value = 0;

void setup() { 
  pinMode(ledPindubas, OUTPUT); 
  pinMode(ledPinduhaut, OUTPUT); 
  pinMode(ledPindegauche, OUTPUT); 
  pinMode(ledPindedroite, OUTPUT); 
  Serial.begin(9600); }

void loop() { 
  value = analogRead(0); 
  Serial.print("X:"); 
  Serial.print(value, DEC);

  if (value > 1010){
    digitalWrite(ledPindegauche, HIGH);
  }

  if (value < 1010){ 
    digitalWrite(ledPindegauche, LOW); 
  }

  if (value < 20){ 
    digitalWrite(ledPindedroite, HIGH); 
  }

  if (value > 20){ 
    digitalWrite(ledPindedroite, LOW);
  }

  value = analogRead(1);
  Serial.print(" | Y:"); 
  Serial.print(value, DEC);

  if (value > 1010){ 
    digitalWrite(ledPinduhaut, HIGH); 
  }

  if (value < 1010){ 
    digitalWrite(ledPinduhaut, LOW); 
  }

  if (value > 20){ 
    digitalWrite(ledPindubas, LOW); 
  }

  if (value < 20){ 
    digitalWrite(ledPindubas, HIGH); 
  }

  value = analogRead(2); 
  Serial.print(" | Z: "); 
  Serial.println(value, DEC);

  if (value < 10){ 
    digitalWrite(ledPinduhaut, HIGH); 
    digitalWrite(ledPindubas, HIGH); 
    digitalWrite(ledPindegauche, HIGH); 
    digitalWrite(ledPindedroite, HIGH); } 
}

