#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoa 2 
#define pin_botaob 3


void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botaoa, INPUT);
  pinMode(pin_botaob, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool botaoa = digitalRead(pin_botaoa);
  bool botaob = digitalRead(pin_botaob);

  if((botaoa == 1) && (botaob == 1)){
    Serial.println("Dois botões apertados");
    digitalWrite(pin_led1, 1);
  } else {
    digitalWrite(pin_led1, 0);
  }
  if((botaoa == 1) || (botaob == 1)){
    digitalWrite(pin_led2, 1);
  } else {
    digitalWrite(pin_led2, 0);
  }

  if((botaoa == 1) ^ (botaob == 1)){
    digitalWrite(pin_led3, 1);
  } else {
    digitalWrite(pin_led3, 0);
  }
}
