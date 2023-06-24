/* RGB-LED
    Een RGB-LED zijn eigenlijk 3 LED's in een: een Rode, Groene en Blauwe. Door verschillende kleuren tegelijkertijd
    te laten branden lijkt het alsof de LED andere kleuren krijgt.

    Een deel van sketch staat hieronder. Het is de bedoeling dat je met de 3 knoppen de 3 verschillende kleuren kunt bedienen

    LET OP:
    De RGB-LED die wij gebruiken werkt andersom dan een een gewone LED. De gemeenschappelijke pin (de langste) wordt aangesloten
    op de +5 volt. Je kunt de RGB-LED laten branden door de andere pin met een laag signaal (LOW) te verbinden.
*/

int toestandknopRood = 0;
int toestandknopBlauw = 0;
int toestandknopGroen = 0;

const int knopRood = 2;
const int knopBlauw = 3;
const int knopGroen = 4;

const int ledRood = 9;
const int ledBlauw = 10;
const int ledGroen = 11;


void setup() {
  pinMode(knopRood, INPUT);
  pinMode(knopBlauw, INPUT);
  pinMode(knopGroen, INPUT);

  pinMode(ledRood, OUTPUT);
  pinMode(ledBlauw, OUTPUT);
  pinMode(ledGroen, OUTPUT);

  Serial.begin(9600);


}

void loop() {
  // schrijf nu zelf de rest van de code
  toestandknopRood = digitalRead(knopRood); //toestandknop is de waarde van knop1
  toestandknopBlauw = digitalRead(knopBlauw); //toestandknop is de waarde van knop2
  toestandknopGroen = digitalRead(knopGroen); //toestandknop is de waarde van knop2

  Serial.print("Toestandknoppen = "); // met de volgende regels worden de waarden van de knoppen naar de monitor gestuurd
  Serial.print(toestandknopRood);
  Serial.print(toestandknopBlauw);
  Serial.println(toestandknopGroen);

  // rode led
  if (toestandknopRood == HIGH) {
    digitalWrite(ledRood, LOW);
  }
  else {
     digitalWrite(ledRood, HIGH);
  }

  // blauwe led
   if (toestandknopBlauw == HIGH) {
    digitalWrite(ledBlauw, LOW);
  }
  else {
     digitalWrite(ledBlauw, HIGH);
  }

  // groen led
   if (toestandknopGroen == HIGH) {
    digitalWrite(ledGroen, LOW);
  }
  else {
     digitalWrite(ledGroen, HIGH);
  }
  
  

}
