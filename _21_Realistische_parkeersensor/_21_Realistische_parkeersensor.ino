/* Met behulp van de parkeersensor (opdracht 15) kun je een ook een realistisch
   parkeersensor met geluid maken. Als je ver van de een object bent geeft de sensor
   geen geluid. Kom je dichterbij dan begint de sensor te piepen. De tijd tussen de 
   piepen hangt af van de afstand tot een object. Als de afstand kleiner wordt de tijd 
   tussen 2 piepjes kleiner. Als je heel dichtbij komt dan gaat het gepiep over in een 
   constant geluid.

   Een aantal elementen staan al klaar maar je zult zelf nog het nodige moeten toevoegen.
   
*/

const int trigPin = 12;
const int echoPin = 11;

long duration;

void setup() {
  pinMode (led, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW); //maak een signaal wat je uit zendt
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);// lees het signaal wat terugkomt
  // op de echoPin, de tijd die tussen uitzenden en ontvangen zit is
  // maatgevend voor de afstand, de tijd is in microseconden
  Serial.print(duration);     // geef de echo-tijd weer in de seriele monitor
  Serial.println();
  delay(100);

  if ( duration > 1000000) {
    digitalWrite (led, LOW);    // zet de led uit
    ....                        // zet het geluid uit
  }

  if ( (duration > 10000) && (duration < 1000)) {     // als de echotijd kleiner is dan 1000 dan...
      digitalWrite (led, HIGH); // zet de led aan
      ....                      // maak piepend geluid
  }
  if ( duration <= 10000) {                     // anders..
    digitalWrite (led, LOW);    // zet de led aan ..
    .....                       // maar constand geluid
  }
}
