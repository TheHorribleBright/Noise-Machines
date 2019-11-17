/**
     RAD (Random And Digital) Noise
       By Teknokratik Industries
             CC-BY-NC-SA
         Burn bootloader @ 1MHz         
*/
int analogin1 = A3;
int analogin2 = A2;
int pwmout1 = 0;
int pwmout2 = 1;
long intensity;

void setup() {
  pinMode(analogin1, INPUT);
  pinMode(analogin1, INPUT);
  pinMode(pwmout1, OUTPUT); 
  pinMode(pwmout2, OUTPUT); 
}

void loop() {
    intensity = map(analogRead(analogin1), 0, 1023, 2, 15);
      digitalWrite(pwmout1, random(intensity));
      digitalWrite(pwmout2, random(intensity));
}
