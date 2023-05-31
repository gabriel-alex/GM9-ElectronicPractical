//constante
const int PIN_BOUTON = 2; 

//variable
int buttonState = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // LED_BUILTIN est un #define par defaut pour la PIN 13 
  pinMode(PIN_BOUTON, INPUT);
  pinMode(2,INPUT);
}

void loop() {
  // lecteur de l'etat du bouton et enregistrement dans la variable buttonState
  buttonState = digitalRead(PIN_BOUTON);
  //Si l'etat du bouton est 1 ou HIGH (c'est-à-dire fermé, le courant passe)
  if (buttonState == HIGH) {
    // allumer la LED:
    digitalWrite(PIN_BOUTON, HIGH);
  } else {
    // sinon etteindre la LED:
    digitalWrite(PIN_BOUTON, LOW);
  }
}
