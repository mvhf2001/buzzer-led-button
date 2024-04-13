// C++ code

int led=10;
int botao=2;
int buzzer=7;


void interrupcao()
{
 digitalWrite(buzzer,HIGH);
 delay(1000);
 digitalWrite(buzzer,LOW);
}

void setup()
{
  pinMode(led,OUTPUT);
  pinMode(botao,INPUT);
  pinMode(buzzer,OUTPUT);
  attachInterrupt(0,interrupcao,RISING);
}


void loop()
{
digitalWrite(led,HIGH);
delay(1000);
tone (7,1000);
digitalWrite(led,LOW);
delay(1000);
noTone(7);
}



