const int analoginpin = A0;
const int analogoutpin = 9;
const int buzzeroutput = 6;

int value = 0;
int outputvalue = 0;

void setup() {
  pinMode(analoginpin, INPUT);
  pinMode(analogoutpin, OUTPUT);
  pinMode(buzzeroutput, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  value = analogRead(analoginpin);
  outputvalue = map(value, 0, 1023, 0, 255);
  Serial.println(value);
  
  analogWrite(analogoutpin, outputvalue);
  
  if (value > 1000){
    tone(buzzeroutput, 1000);}
  
  if (value < 1000){
    noTone(buzzeroutput);}
    
  delay(3);
}
