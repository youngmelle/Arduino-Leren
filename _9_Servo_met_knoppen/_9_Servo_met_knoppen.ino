/*
  In deze les gaan we de servo bedienen met knoppen. De sketch lijkt op de sketch
  toneKeyboard. Hier gebruiken we de bibliotheek van de servo en de bewegingscommando's
  die bij servo's horen.

*/

#include <Servo.h>  //bibliotheek servo

Servo myservo;  //we noemen de servo myservo
int knop1 = 2; //knop1 op pin 2
int knop2 = 3; // knop2 op pin 3
int toestandknop1 = 0; // de toestand van knop1 is een variabele (HIGH of LOW)
int toestandknop2 = 0; // de toestand van knop2 is een variabele (HIGH of LOW)
int pos = 0;    // de positie van de servo is een variabele (tussen 0 en 180)

void setup()
{
  pinMode (knop1, INPUT); // knop1 is een INPUT
  pinMode (knop2, INPUT); // knop2 is een INPUT
  myservo.attach(9);  // de servo is verbonden met pin 9
  Serial.begin(9600);
  
}


void loop()
{
  toestandknop1 = digitalRead(knop1); // lees knop1
  toestandknop2 = digitalRead(knop2); // lees knop2
  Serial.print("toestandknoppen = "); // communiceer met de monitor
  Serial.print(toestandknop1);
  Serial.println(toestandknop2);
  
  if (toestandknop1 == HIGH) {        // als knop1 wordt ingedrukt doe...
    myservo.write(180);              // ga naar positie 180
    delay(15);                       // wacht tot de servo er is
  }
  else if (toestandknop2 == HIGH) {  // als knop2 ingedrukt wordt doe iets anders..
    myservo.write(0);              // ga naar positie 0
    delay(15);                       // wacht tot de servo er is
  }
}

/*
  Extra opdracht:
  Verander de sketch zo dat:
  er een derde positie bij komt: de middenpositie. knop1 is voor pos 180,
  knop2 voor pos 0. Als er geen knop wordt ingedrukt moet de servo naar de
  middenpositie (90)
*/
