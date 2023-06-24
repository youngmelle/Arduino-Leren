/* HC-SR04 parkeersensor
   Deze sketch maakt met een HC-SR04 een parkeersensor. Er is een seriele
   monitor aan gekoppeld om het moment te kunnen bepalen waarop de led moet gaan
   branden is in te stellen.
  
   HC SR04:
	 VCC aan +5V
	 GND aan GND
	 TRIG aan pin 12
	 ECHO aan pin 11

   Led aan pin 13 (denk bij het aansluiten aan de weerstand van 330 ohm)
*/

const int trigPin = 12;
const int echoPin = 11;
const int led = 13;
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

  if (duration < 1000) {     // als de echotijd kleiner is dan 1000 dan...
    digitalWrite (led, HIGH);  // zet de led aan
  }
  else {                     // anders..
    digitalWrite (led, LOW);   // zet de led uit..
  }
}
/* Extra opdracht 1
   Leuk om in de monitor de tijd te zien, maar handiger is het om de afstand te zien
   De geluidsnelheid is 343 m/s. Laat de afstand (in cm) weergeven in de monitor

*/
