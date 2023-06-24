/*
  Tone keyboard
  In deze sketch gaan we de arduino ombouwen tot een keyboard.
  We beginnen met een keyboard met 2 toetsen (knoppen).


*/


const int knop1 = 2; // knop 1 is aangesloten op pin 2
const int knop2 = 3; // knop 2 is aangesloten op pin 3
const int speaker = 8; // de buzzer of speaker is aangesloten op pin 8 (speaker met met 100 ohm weerstand)

const int toon1 = 262; // frequentie van de toon in Hz
const int toon2 = 440; // frequentie van de toon in Hz
int toestandknop1 = 0; // de waarde van knop 1
int toestandknop2 = 0; // de waarde van knop 2

void setup() {
  pinMode(knop1, INPUT);
  pinMode(knop2, INPUT);
  pinMode (speaker, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  toestandknop1 = digitalRead(knop1);
  toestandknop2 = digitalRead(knop2);

  Serial.print("toestandknoppen = ");  // schrijf de waarden van de knoppen naar de monitor
  Serial.print(toestandknop1);
  Serial.println(toestandknop2);
  
  if (toestandknop1 == HIGH) {
    tone(speaker, toon1); // toon 1 klinkt nu
  }
  else if (toestandknop2 == HIGH) {
    tone(speaker, toon2);
  }
  else {
    noTone(speaker);
  }
}
/*
  Extra opdracht 1:
  Als je een keyboard met twee knoppen kan maken, kan je het ook vast met meer..
  Of misschien nog leuker, vervang de toetsen door een lichtsensor. Zie opdracht 5 voor het
  aansluiten van de lichtsensor.

  Voeg aan de sketch regels toe zodat je de gemeten sensorwaarde in de monitor kunt zien.
  Pas de sketch verder zo aan dat je toon1 hoort als je je vinger op de lichtsensor legt.

  Extra opdracht 2:
  Pas de sketch verder aan zodat als er veel licht op sensor valt je geen geluid hoort; bij minder licht je toon1 hoort en
  toon2 als er bijna geen licht op de sensor komt.

*/
