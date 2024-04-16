/*
   Fundación Kinal
   Centro Educativo Técnico Laboral KInal
   Quinto Perito 
   Quinto Electrónica
   Código Técnico: EB5AM/EB5AV
   Curso: Taller de Electrónica Digital y Reparación de Computadoras
   Proyecto: Cómo leer un pin digital
   Dev: Prof. ALejandro López Navas
   Fecha: 12 de abril
*/

//Directivas del preprocesador
#define push_button 2  //Push button conectado al pin2
#define led 3

void setup() {
  pinMode(push_button, INPUT); //Pin2 como entrada
  pinMode(led, OUTPUT);  
  Serial.begin(9600);          //Inició la comunicación serial
  Serial.println("Lectura de un pulsador"); //Envio el texto entre comillas al puerto serie
}

void loop() {
  //Varialble local que se necarga de almacenar el valor (abierto o cerrado)
  //del pulsador conectado al pin2
  bool estado_boton = digitalRead(push_button);
  if(estado_boton == HIGH) //¿He presionado el interruptor?
  {
    //Si lo he presionado
    digitalWrite(led, LOW); //apago el led
  } else {
    //si no lo he presionado
    digitalWrite(led, HIGH); //mantengo prendido el led
  }
}