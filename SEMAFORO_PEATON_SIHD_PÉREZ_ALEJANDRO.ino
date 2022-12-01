int counter;                     //VARIABLE CONTADOR.
int botonState;                  //VARIABLE INDICADORA DE BOTÓN EN EL CIRCUITO.

void setup()
{
  pinMode(13, OUTPUT);           //PINES DE SALIDA.
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  botonState = digitalRead(7);    //CAMBIAMOS LA DENOMINACIÓN DEL PIN 7 A BOTONSTATE.
  
  if (botonState == LOW){         
  
    digitalWrite(13, HIGH);       
    digitalWrite(8, HIGH);
 
  }else{                          
    
  delay(3000);
  digitalWrite(13, LOW);
    
  
  for (int i=0; i<5; i++)         //CON FOR, HACEMOS QUE SE REPITA LA ÓRDEN.
{
  digitalWrite(12, HIGH);         //VERDE PEATON - ROJO COCHE.
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(8, LOW);
}
  digitalWrite(11, HIGH);         //VERDE PEATON - ROJO COCHE.
  digitalWrite(9, HIGH);
  delay(2500);
  digitalWrite(9, LOW);
  delay(500);
  
  for (int i=0; i<5; i++)         //REPETIR EL CÓDICO A EJECUTAR.
{
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(500);
}
  digitalWrite(11, LOW);
  }
  
}
