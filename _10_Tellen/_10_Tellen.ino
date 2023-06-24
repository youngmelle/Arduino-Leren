/*
  Tellen
  Als je de knop 3x indrukt wordt gaat de led (verbonden met pin 13)aan.
  In de monitor kun je zien hoe vaak je de knop hebt ingedrukt

*/
int knop = 2;       // knop aan pin 2
int led =  13;       // led aan pin 13
int toestandknop = 0;   // variabele voor het lezen van de knop
int teller = 0;

void setup() {
  pinMode(led, OUTPUT);     //ledpin is output
  pinMode(knop, INPUT);     //knop is input
  Serial.begin(9600);
  
}

void loop() {
  Serial.print("teller = "); 
  Serial.println(teller);             // print de waarde van de teller in het monitor-scherm
  toestandknop = digitalRead(knop);   //toestandknop is de waarde van knop
  if (toestandknop == HIGH) {         //controleer of de knop ingedrukt is
     teller++;                        // teller++ is een afkorting van teller=teller+1 - de waarde van teller wordt met één verhoogd
     delay(500);                      // even tijd om de knop los te laten
  }

  if (teller == 3) {
    digitalWrite(led, HIGH);          //indien 3x gedrukt: led aan
  }
  else {
    digitalWrite(led, LOW);           //anders: led uit
  }
}
/*
  Extra Opdracht 1:
  Verander de sketch zo dat:
  De teller bij de 6de keer drukken weer bij 0 begint (0, 1, 2, 3, 4, 5, 0, 1 ....)

  Extra Opdracht 2:
  Voeg een tweede knop toe. 
  Verander de sketch zo dat: 
  De teller terugtelt als je op de tweede knop drukt. Als je bij een tellerstand 0 op deze knop
  drukt dan moet de waarde van de teller naar 5 (5, 4, 3, 2, 1, 0, 5, 4, ...)

*/


