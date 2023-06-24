/*
  Knop
  Als de knop (verbonden met pin2) ingedrukt wordt gaat de led
  (verbonden met pin 13)aan.

*/
int knop = 2;       // knop aan pin 2
int led =  13;       // led aan pin 13
int toestandknop = 0;   // variabele voor het lezen van de knop

void setup() {
  pinMode(led, OUTPUT);     //ledpin is output
  pinMode(knop, INPUT);     //knop is input
  Serial.begin(9600);       //commando voor de communicatie met de laptop
}

void loop() {
  toestandknop = digitalRead(knop);   //toestandknop is de waarde van knop
  Serial.print("toestandknop = ");    // schrijf "toestandknop = " naar de monitor
  Serial.println(toestandknop);       // schrijf de waarde van de variabele toestandknop naar de monitor
  
  if (toestandknop == HIGH) {         //controleer of de knop ingedrukt is
    digitalWrite(led, HIGH);          //indien ingedrukt: led aan
  }
  else {
    digitalWrite(led, LOW);           //anders: led uit
  }
}
/*
  Extra Opdracht:
  Verander de sketch zo dat:
  De led na één keer indrukken 5 seconden lang gaat branden.

*/
