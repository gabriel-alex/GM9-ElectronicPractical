// variable global
float diametre;
int incomingByte;

// constantes
const float pi = 3.14; 

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  Serial.println("Saisir le diamètre du cercle:");
  if (Serial.available() > 0) {
                // read the incoming byte:
                diametre = Serial.read();

                // say what you got:
                Serial.print("recu: ");
                Serial.println(incomingByte, DEC);
                Serial.print("perimetre:");
                Serial.println(calculPerimetre(diametre));
                Serial.print("surface:");
                Serial.println(calculSurface(diametre));
        }
}

float calculPerimetre(float diam){
  float circ = pi * diam;
  return circ;
}

float calculSurface(float diam){
  float surf = pi * pow(diam/2,2);
  return surf;
}


