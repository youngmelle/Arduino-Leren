/*
  Of_functie
  Soms wil je met meerdere knoppen één actie uit laten voeren.
  Dat kan met een "en" en "of" functie.
  In deze sketch zien we de "of" functie werkt.
  Zelf ga je op zoek naar de "en" functie.


*/
int knop1 = 2;       // knop aan pin 2
int knop2 = 3;       // knop aan pin 3
int led =  13;       // led aan pin 13
int toestandknop1 = 0;   // variabele voor het lezen van de knop 1
int toestandknop2 = 0;   // variabele voor het lezen van de knop 2

void setup() {
  pinMode(led, OUTPUT);      //ledpin is output
  pinMode(knop1, INPUT);     //knop1 is input
  pinMode(knop2, INPUT);     //knop2 is input
  Serial.begin(9600);        //communicatie met de computer
}
void loop() {
  toestandknop1 = digitalRead(knop1); //toestandknop is de waarde van knop1
  toestandknop2 = digitalRead(knop2); //toestandknop is de waarde van knop2

  Serial.print("Toestandknoppen = "); // met de volgende regels worden de waarden van de knoppen naar de monitor gestuurd
  Serial.print(toestandknop1);
  Serial.println(toestandknop2);
  

  
  if (toestandknop1 == HIGH || toestandknop2 == HIGH) {          //controleer of de knop 1 of 2 ingedrukt is; de twee verticale strepen (||) geven de of-functie aan
    digitalWrite(led, HIGH);        //indien 1 of 2 ingedrukt: led aan
  }
  else {
    digitalWrite(led, LOW);         //anders: led uit
  }
}
/*
  Extra opdracht 1:
  Verander de sketch zo dat:
  De lamp alleen aan gaat als de knop 1 én 2 worden ingedrukt. Kijk in het lesmateriaal om de symbolen voor de en-functie te vinden.

  Extra opdracht 2:
  Voeg nog een 3de knop toe. Sluit deze aan op pin 4.
  Verander de sketch zodat de LED aangaat als je op knop 1 of knop 2 drukt én op knop 3. Om de LED te laten branden moet je dus
  in ieder geval op knop 3 drukken en één van de andere knoppen.

*/
