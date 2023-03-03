// variables globales
int varGlobale1 =1;
int varGlobale2;

// constantes
const float pi = 3.14; 
#define consyanteName value //déconseillé

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {

  boolean varLocale1 = true;
  double varLocale2 = 33.1182;

  varGlobale2 = varGlobale1 *pi;
  double varLocale3 = varGlobale2 + varLocale2;

  Serial.print("varGlobale1:");
  Serial.println(varGlobale1);
  Serial.print("varGlobale2:");
  Serial.println(varGlobale2);
  Serial.print("varLocale1:");
  Serial.println(varLocale1);
  Serial.print("varLocale2:");
  Serial.println(varLocale2);
  Serial.print("varLocale3:");
  Serial.println(varLocale3);
  
}


