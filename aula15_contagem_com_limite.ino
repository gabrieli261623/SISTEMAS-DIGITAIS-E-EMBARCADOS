#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoa 2 
#define pin_botaob 3
int var = 0;
int tic = 0;
int tic2 = 0;

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

  if  (botaoa == 1){
    if (tic == 0){
      var+=1;
      tic = 1;
    }
  } else{
    tic = 0;
  }
  Serial.println (var);

    if  (botaob == 1){
    if (tic2 == 0){
      var-=1;
      tic2 = 1;
    }
  } else{
    tic = 0;
  }
  Serial.println (var2);

}
