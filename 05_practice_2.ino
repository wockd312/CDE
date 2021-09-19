#define PIN7 7
int count = 0;

void setup() {
  // put your setup code here, to run once:
    pinMode(PIN7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(PIN7, LOW);
    delay(1000);
    
    while(count != 5) {
      digitalWrite(PIN7, HIGH);
      delay(100);
      digitalWrite(PIN7, LOW);
      delay(100);
      count += 1;
    }
    digitalWrite(PIN7, HIGH);
    while(1) {
      
    }
}
