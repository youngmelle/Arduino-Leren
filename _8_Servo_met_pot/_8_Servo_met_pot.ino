/*
  In deze les gaan we dingen laten bewegen.
  Bestuur een servo met een potmeter. Een servo is een bijzonder apparaatje.
  Het beweegt 180 graden in het rond en kan daarbinnen elke stand voor je
  aannemen. Voor de besturing heb je een bibliotheek nodig. Dit zit voor een
  servo standaard in de software, hierdoor wordt het schrijven van de sketch
  een stuk makkelijker. Je roept een servo op met: Sketch-Bibliotheek importeren-Servo.
  Een tekening van de schakeling vind je in figuur 8_Servo_met_pot.
  Let bij het aansluiten van de draden goed op de kleur van de draden (zie figuur draadkleuren servo.jpg)

*/

#include <Servo.h>  // importeren Servo-Bibliotheek

Servo myservo;

int potpin = 0;  // analoge pin wordt gebruikt door de potmeter
int val;    // lees de variabele waarde van de potmeter

void setup()
{
  myservo.attach(9);  // de servo is verbonden met pin 9
}

void loop()
{
  val = analogRead(potpin);            // lees de waarde van de potmeter (waarde tussen 0 en 1023)
  val = map(val, 0, 1023, 0, 179);     // reken de waarde om voor de servo (waarde tussen 0 en 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(15);                           // wacht tot de servo er is gekomen
}

/*
  Handig voor de besturing van een raam of lamellen op afstand
*/
