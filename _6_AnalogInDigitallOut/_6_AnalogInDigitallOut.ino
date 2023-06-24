/*
  Analoge input, digital out
  In deze sketch gaan we meten op een analoge ingang (A0)
  We gaan de waarde van A0 nu gebruiken om een led aan en uit te schakelen
  De waarde van A0 stellen we in met een potmeter. We lezen de waarde om
  te kunnen zien of bij de juiste waarde geschakeld wordt.


*/
int analogIn = A0;  // Analoge input van de potmeter
int potmeter = 0;   // waarde te meten van A0 noemen we potmeter
int led = 13;       // de led is op pin 13 aangesloten

void setup() {
  pinMode (led, OUTPUT);
  // initialize serial communications at 9600 bps:
  // maak een seriele communicatie op 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // lees de analoge waarde:
  potmeter = analogRead(analogIn);
  Serial.print("potmeterwaarde = " );
  Serial.println(potmeter);
  if (potmeter > 500) {      // deze waarde kun je nog aanpassen
    digitalWrite (led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
  delay(50);
}
/*
  Extra opdracht:
  Met een potmeter het licht aanzetten is leuk, maar leuker is het als het licht automatisch aangaat.
  Sluit een lichtsensor (LDR)aan in plaats van de potmeter (zie voor de aansluiting opdracht 5).
  Pas de sketch aan zodat de LED aangaat als er geen of weinig licht op de LDR valt. Kies met behulp
  van de monitor een geschikte waarde.

*/
