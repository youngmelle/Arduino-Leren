/*
  Analog input, serial output
  In deze sketch gaan we meten op een analoge ingang (A0)
  Arduino kan een spanning meten tussen 0-5 volt. De spanning
  die gemeten wordt, kan weergegeven worden op de computer.
  Dit gebeurt via de seriele monitor (rechts boven; zie ook figuur: 5_AnalogInSerial-b)
  De waarde die weer wordt gegeven is tussen 0-1023.
  0 = 0 volt, 1023 = 5 volt
  We gebruiken in het eerste voorbeeld een variabele weerstand (potmeter; zie figuur: 5_AnalogInSerial-a)
  De middelste aansluiting van de potmeter is angesloten op de loper,
  de spanning varieert omdat op de loper de spanning wordt gedeeld.

*/


int analogIn = A0;  // Analoge input van de potmeter
int potmeter = 0;   // waarde te meten van A0 noemen we potmeter

void setup() {
  // initialize serial communications at 9600 bps:
  // maak een seriele communicatie op 9600 bps: (voor de gegevensoverdracht van arduino naar computer)
  Serial.begin(9600);
}

void loop() {
  // lees de analoge waarde:
  potmeter = analogRead(analogIn);
  Serial.print("potmeterwaarde = " );
  Serial.println(potmeter);
  delay(50);
}
/*
  Extra opdracht:
  Een potmeter aflezen is leuk maar we willen ook met sensoren werken.
  Sluit een lichtsensor (LDR) aan volgens tekening in deze map: 5_AnalogSerial-LDR

  De spanning op A0 is nu ook een spanningsdeler, de LDR zorgt er voor dat
  de spanning afhankelijk van het licht varieert.
*/
