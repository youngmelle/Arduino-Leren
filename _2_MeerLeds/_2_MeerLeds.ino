/*
  MeerLeds
  Laat eens meer leds aan en uit schakelen, keer op keer.
 
*/
 
// De leds zijn als volgt aangesloten

int ledRood = 10;
int ledGeel = 11;

// Het programmablok void setup wordt eenmaal beschreven
void setup() {                
  // We geven aan dat de led-pin-aansluitingen output moet zijn (spanning moet geven)
  pinMode(ledRood, OUTPUT);
  pinMode(ledGeel, OUTPUT);  
}

// Het programmablok void loop herhaalt zich keer op keer
void loop() {
  digitalWrite(ledRood, HIGH);   // zet spanning op de led-pin
  digitalWrite(ledGeel, HIGH);   // zet spanning op de led-pin
  delay(1000);               // wacht een seconde (1000 miliseconden)
  digitalWrite(ledRood, LOW);    // zet de spanning van de led-pin af
  digitalWrite(ledGeel, LOW);    // zet de spanning van de led-pin af
  delay(1000);               // wacht een seconde
}
/* 
Extra opdracht 1:
Laat de leds om en om knipperen. Dus als de rode aangaat, dan moet de gele uitgaan.

Extra opdracht 2:
Monteer op het breadboard een derde groene LED. Sluit de groene led aan op pin 12.
Pas de sketch aan zodat de LED's gaan knipperen als bij een stoplicht (rood (5 s aan),groen (3 s aan), geel (1s aan)).

*/
