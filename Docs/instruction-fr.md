### Introduction à l'électronique et aux objets connectés

### Objectifs pédagogiques
* Comprendre les concepts de base de l'électronique 
* Créer des programmes simples en langage C 
* Utiliser une plateforme de développement Arduino
* Créer un prototype intégrant de l'électronique
* Traduire un diagramme d'activité en un programme et inversement
* Décrire la chaine fonctionnelle d'un système
* Documenter le processus et le fonctionnement du système

### Travail à faire
Créer un véhicule qui :
* affiche son état de fonctionnement avec un code couleur (rouge : erreur, orange : obstacle, vert : ok)
* envoye des messages via bluetooth
* évite les obstacles


### Conseils 
* Tester chaque fonctionnalité seule avant de l'intégrer à d'autres fonctionnalités.

### Etapes 
* Installer le logiciel et le pilote ([Documentation](./Tutorial.pdf) p15-17)  
* Assembler le matériel ([Documentation](./Tutorial.pdf) p20-30)  
* Tester le programme des LED ([01-LEDscrollExample](../Scripts/01-LEDscrollExample/)) et completer le document réponse  
* Ecrire le code pour faire défiler des LEDs rouges ([02-LEDscrollCustom](../Scripts/02-LEDscrollCustom/)) et completer le document réponse  
* Mesurer une distance avec un capteur ultrasonique  ([03-UltrasonicRanging](../Scripts/03-UltrasonicRanging)) et completer le document réponse  
* Mesurer une distance avec un capteur ultrasonique  ([04-UltrasonicRanging](../Scripts/03-UltrasonicRanging)) et completer le document réponse  
* Tester le programme d'évitement des obstacles ([05-ObstacleAvoidance](../Scripts/05-ObstacleAvoidance/05-obstacleAvoidance.ino)) et completer le document réponse  
* Ajouter des codes couleurs au programme d'évitement d'obstacles (rouge : erreur, orange : obstacle, vert : ok) ([06-ObstacleAvoidanceWithColors](../Scripts/06-obstacleAvoidanceWithColors/)), dessiner le logigramme du programme et completer le document réponse   
* Tester la communication bluetooth ([07-bluetoothConnexion](../Scripts/07-bluetoothConnexion/)) avec [Serial Bluetooth Terminal](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal&hl=fr&gl=US&pli=1) et completer le document réponse  
* Modifier le programme pour changer la couleur des led via Bluetooth ([08-bluetoothLEDcontrol](../Scripts/08-bluetoothLEDcontrol/)) et completer le document réponse  
* Intégrer l'envoi de message dans le programme d'évitement d'obstacle([09-obstacleavoidanceBluetooth](../Scripts/09-ObstacleAvoidanceBluetooth/))    

### Évaluation 
* Nombre de fonctionnalités implémentées
* Document réponse ([assignment.odt](../Assignment.odt) ou [assignment.doc]())
* Code source (via github)

### Calendrier
* 15 min Présentation de l'objectif
* 60 min Assemblage du matériel (tutorial p20-30) + analyse des fonctionnalités
* 150 min Travail en autonomie (validation pour chaque tâche du rendu)
* 15 min Retour sur le TP

### Ressources
[Original Github Freenove Rover](https://github.com/Freenove/Freenove_4WD_Car_Kit)  
[Documentation librairie LED](https://github.com/Freenove/Freenove_WS2812B_RGBLED_Controller)