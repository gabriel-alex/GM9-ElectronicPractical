//----- appel des librairies-------
#include <Servo.h>
#include <IRremote.h>

//----- constantes
#define TRIGGER_PIN  4
#define ECHO_PIN     6
#define SERVO_PIN     9
const char DIN_RECEPTEUR_INFRAROUGE = 2;
int motor1_enablePin = 11; //pwm
int motor1_in1Pin = 13;
int motor1_in2Pin = 12;
 
int motor2_enablePin = 10; //pwm
int motor2_in1Pin = 8;
int motor2_in2Pin = 7;


//------- declaration des objets globaux-----
Servo Myservo; // creer un objet servo pour controler le servo moteur via ses methodes 
IRrecv monRecepteurInfraRouge (DIN_RECEPTEUR_INFRAROUGE);

//------- declaration des variables globales-----
int pos = 0; // variable globale de la potion du servo moteur
int servoDelay =200;
decode_results messageRecu;

void setup() {
  pinMode(TRIGGER_PIN, OUTPUT); // Sets the trigPin as an Output
  pinMode(ECHO_PIN, INPUT); // Sets the echoPin as an Input
  Myservo.attach(SERVO_PIN);

 monRecepteurInfraRouge.enableIRIn();
  
  Serial.begin(9600);
 

}

void loop() {
  SetMotor1(255,false);
  SetMotor2(255,true);
  
  Myservo.write(45);
  delay(servoDelay);
  //mesure_distance();
  Myservo.write(90);
  delay(servoDelay);
  //mesure_distance();
  Myservo.write(135);
  delay(servoDelay);
  //mesure_distance();
  Myservo.write(90);
  delay(servoDelay);

  if (monRecepteurInfraRouge.decode(&messageRecu))
  {
    Serial.println(messageRecu.value,HEX);
    
    monRecepteurInfraRouge.resume();
  }
  delay(500);
  /*
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    Myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
*/
}

int mesure_distance(){
  long duration, inches, cm; // déclarations des variables locales 
  int distance;
  // Clears the trigPin
digitalWrite(TRIGGER_PIN, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(TRIGGER_PIN, HIGH);
delayMicroseconds(10);
digitalWrite(TRIGGER_PIN, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(ECHO_PIN, HIGH);

// Calculating the distance
//distance= duration*0.034/2;
distance= duration/58.0;

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}

//Fonction qui set le moteur1
void SetMotor1(int speed, boolean reverse)
{
  analogWrite(motor1_enablePin, speed);
  digitalWrite(motor1_in1Pin, ! reverse);
  digitalWrite(motor1_in2Pin, reverse);
}
 
//Fonction qui set le moteur2
void SetMotor2(int speed, boolean reverse)
{
  analogWrite(motor2_enablePin, speed);
  digitalWrite(motor2_in1Pin, ! reverse);
  digitalWrite(motor2_in2Pin, reverse);
}

