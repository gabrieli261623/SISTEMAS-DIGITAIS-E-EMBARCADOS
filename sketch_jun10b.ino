// Instalação de um sistema automático de semáforo no cruzamento das ruas A (preferencial) e B.

// Quando houver carros transitando somente na Rua B, o semáforo 2 deverá permanecer verde.
// Quando houver carros transitando somente na Rua A, o semáforo 1 deverá permanecer verde.
// Quando houver carros transitando nas Ruas A e B, o semáforo da Rua A deverá estar verde, pois é preferencial.


#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoa 2 
#define pin_botaob 3
#define pin_botaoc 4


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

   if ((botaoa==1)&&(botaob==1)){
    digitalWrite (pin_led1, 1);
    digitalWrite (pin_led2, 0);
   }

   if ((botaoa==1)&&(botaob==0)){
    digitalWrite (pin_led1, 1);
   }

   if ((botaob == 1)&&(botaoa==0)){
    digitalWrite (pin_led2, 1);
   }
   

}