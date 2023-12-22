// Definir las frecuencias de las notas musicales
int Do = 261;
int Re = 293;
int Mi = 329;
int Fa = 349;
int Sol = 391;
int La = 440;
int Si = 493;
int DoS = 277;
int ReS = 311;

// Definir las duraciones de las notas (tiempos)
int t1 = 400;
int t2 = 200;
int t3 = 100;

void setup() {
  // Configurar el pin 3 como salida para controlar el buzzer o altavoz
  pinMode(3, OUTPUT);
}

void loop() {
  // Reproducir "La Cucaracha"
  
  // Primera línea
  playNote(Do, t2);
  pause(t3);
  playNote(Do, t2);
  pause(t3);
  playNote(Do, t2);
  pause(t3);
  playNote(Fa, t2);
  pause(t1);
  playNote(La, t1);
  pause(t1);
  pause(t1);
  
  // Segunda línea
  playNote(Do, t2);
  pause(t3);
  playNote(Do, t2);
  pause(t3);
  playNote(Do, t2);
  pause(t3);
  playNote(Fa, t2);
  pause(t1);
  playNote(La, t1);
  pause(t1);
  pause(t1);
  
  // Tercera línea
  playNote(Fa, t2);
  pause(t3);
  playNote(Fa, t2);
  pause(t3);
  playNote(Mi, t2);
  pause(t3);
  playNote(Mi, t2);
  pause(t3);
  playNote(Re, t2);
  pause(t3);
  playNote(Re, t2);
  pause(t3);
  playNote(Do, t2);
  pause(t1);
  
  // Cuarta línea
  playNote(Do, t2);
  pause(t3);
  playNote(Do, t2);
  pause(t3);
  playNote(Do, t2);
  pause(t3);
  playNote(Mi, t2);
  pause(t1);
  playNote(Sol, t1);
  pause(t1);
  pause(t1);
}

// Función para tocar una nota
void playNote(int note, int duration) {
  tone(3, note, duration); // Tocar la nota en el pin 3
  delay(duration * 1.30); // Agregar un pequeño espacio entre notas
}

// Función para hacer una pausa
void pause(int duration) {
  delay(duration);
}
