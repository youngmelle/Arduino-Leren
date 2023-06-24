/*
  Een knop bedienen op een Arduino noemen we een digitale ingang. Het is ingedrukt of niet.
  Een LED laten branden is vaak een digitale uitgang, de LED is aan of uit.
  Maar we kunnen met Arduino ook LEDs dimmen. Dit noemen we AnalogOut. De uitgang is niet
  meer aan of uit, maar kan er ook tussen in zitten. Arduino doet dit met PWM (Pulse Width Modulation). Alleen de
  poorten 3,5,6,9,10 en 11 kunnen AnalogOut leveren. Deze poorten zijn te herkennen aan een
  slingertekentje (~).We gaan op een LED twee knoppen aansluiten, 1 voor gedimde toestand en de
  ander voor vol vermogen.

*/
int knop1 = 2;       // knop aan pin 2
int knop2 = 3;       // knop aan pin 2
int led =  11;       // led aan pin 11
int toestandknop1 = 0;   // variabele voor het lezen van de knop
int toestandknop2 = 0;   // variabele voor het lezen van de knop

void setup() {
  pinMode(led, OUTPUT);      //ledpin is output
  pinMode(knop1, INPUT);     //knop is input
  pinMode(knop2, INPUT);     //knop is input
  Serial.begin(9600);
}
void loop() {
  toestandknop1 = digitalRead(knop1); //toestandknop is de waarde van knop
  toestandknop2 = digitalRead(knop2); //toestandknop is de waarde van knop

  Serial.print("toestandknoppen = "); // communiceer met de monitor
  Serial.print(toestandknop1);
  Serial.println(toestandknop2);
  

  if (toestandknop1 == HIGH) {          //controleer of de knop1 ingedrukt is
    analogWrite(led, 50);        //indien ingedrukt: led aan op sterke 50 (waarde tussen 0 - 255)
  }
  else {
    if (toestandknop2 == HIGH) {          //controleer of de knop2 ingedrukt is
      analogWrite(led, 255);        //indien ingedrukt: led aan op sterke 100 (waarde tussen 0 - 255)
    }
    else {
      digitalWrite(led, LOW);         //anders: led uit
    }
  }
}
/*
  Extra opdracht:
  Je kunt meer lichtniveaus maken door nog meer drukknoppen te gebruiken. Dit is de praktijk een beetje onhandig.
  Je kunt ook één knop gebruiken. Na één keer drukken gaat de LED heel erg gedimd branden. Na nog een
  keer een beetje feller. Bij de 3de op nog feller en bij de 4de keer helemaal fel. Als je dan nog een
  drukt gaat de LED weer uit.
  Hint: zie opdracht 10

*/
