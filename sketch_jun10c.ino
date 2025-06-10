// Controle de Bombeamento de água:
// O desenho a seguir mostra um processo simples para encher uma caixa d’água de um rio próximo.
// Os sensores de nível alto (H) e de nível baixo (L) são utilizados para determinar o acionamento da bomba (B) e do alarme (A).

#define pin_bomba 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoa 2 
#define pin_botaob 3
#define pin_botaoc 4

void setup() {
  pinMode(pin_bomba, OUTPUT);
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

  if((botaoa==1)&&(botaob==1)){
    digitalWrite(pin_bomba, 0);
  }

  if((botaoa == 1)&&(botaob == 0)){
    digitalWrite(pin_bomba, 1);
  }

  if((botaoa==0)&&(botaob==0)){
    digitalWrite(pin_bomba, 1);
  }

  if((botaoa == 0)&&(botaob == 1)){
    digitalWrite(pin_bomba, 0);
    Serial.println("Erro");
  }

}
