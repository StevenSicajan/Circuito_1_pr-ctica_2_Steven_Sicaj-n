/*
   Fundación Kinal 
   Centro Educadtivo Técnico Laboral Kinal
   Quinto Perito
   Quinto Electrónica
   Código Técnico: EB5AV
   Curso: Taller de Electrónica Digital y Reparación de Computadoras
   Proyecto: Estructura en un pin digital (Encender o apagar un pin digital)
   Dev: Prof. Alejandro López Navas
   Fecha: 12 de abril 2024
*/
//Directivas del preprocesador
#define LedNaranja     4     //pin4 conectado a una led
#define tiempo_espera 500    //tiempo entre estados del led

void setup()
{
  pinMode(LedNaranja, OUTPUT);  //Pin4 como salida
  digitalWrite(LedNaranja, LOW);  //LED concetado al pin13 inicia apagado
}
void loop()
{
  digitalWrite(LedNaranja, HIGH); //Enciendo el led conectado al pin4
  delay(tiempo_espera); //espera de 500 milisegundos
  digitalWrite(LedNaranja, LOW); //Apago el led conectado al pin4
  delay(tiempo_espera); //espera de 500 milisegundos
}

