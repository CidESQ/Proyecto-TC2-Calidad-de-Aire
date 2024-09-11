#include <Arduino.h>
#define MQ135pin (2) //? Conectar al pin 2
//! Instalar la bilioteca MQ135 by GeorgeK

void setup()
{
  Serial.begin(9600);                                                   //? Inicializamos el puerto serial a 9600 baudios
  Serial.println("El sensor de contaminacion se esta precalentando. "); //! Se debe de calentar antes para que funcione correctamente
  delay(20000);                                                         //? Espera 20s
}

void loop()
{
  double sensorValue = analogRead(MQ135pin); //? Lectura de la entrada análoga "A2";
  Serial.println("Valor detectado por el sensor: ");
  Serial.print(sensorValue);
  if (sensorValue > 300) //! A partir de 300 pp se considera que hay contaminacion
  {
    Serial.print(" | Se ha detectado contaminacion ");
  }
  Serial.println("");
  delay(3000);
}