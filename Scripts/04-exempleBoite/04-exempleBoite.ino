/*
 * Description de l'objet boite et definition de ce qui est publique et ce qui est privé
 */
class Boite{
  private:
  double hauteur;
  double largeur;
  double profondeur;
  public:
  Boite(double haut, double larg, double prof);
  double contientVolume(void );
};
// Description du constructeur, fonction appelé lors de la création d'une instance de Boite
Boite::Boite(double haut, double larg, double prof){
    hauteur =haut;
    largeur = larg;
    profondeur = prof;
  }
// Description de la methode contient volume
double Boite::contientVolume(){
    return hauteur * largeur * profondeur;
 }

Boite boite1(1.2,1.3,0.5); // creation d'une instance globale boite1 de l'objet 

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  Serial.println(boite1.contientVolume());

}



