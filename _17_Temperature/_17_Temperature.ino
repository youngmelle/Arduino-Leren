/* Temperatuursensor
  Met behulp van een temperatuursensor kan de temperatuur nauwkeurig worden gemeten. Voor de sensor die wij gebruiken geldt:
  U = 0,01951 x T + 0,4
  met wat handig rekenwerk valt dan af te leiden dat:
  T = ADval / 4 - 20,5    ADval is de waarde die je leest op de ingangen A0 t/m A5
*/


const int tempPin = A0;
int ADval = 0;
float tempC = 0.0;  // tot nu toe hebben we steeds het type int gebruikt
                    // voor komma-getallen gebruiken we het type float


void setup()
{
  Serial.begin(9600);
}


void loop()
{

  ADval = analogRead(tempPin);                  // lees de sensor uit
  tempC = (float)ADval / 4.0 - 20.5;            // reken de waarde om naar temperatuur

  Serial.print("  temp. : ");                    // en schrijf de waarde naar de monitor
  Serial.println(tempC);

  delay(1000); // metingen 1x per seconde
}



/*
  Extra Opdracht 1:
  Automatische koorts-thermomenter. Breid de schakeling uit met 2 LED's: een rode en een groene. Pas de sketch aan zodat
  de groene LED gaat branden als de temperatuur tussen de 25 en 30 graden is (rode LED uit). En als de temperatuur onder
  de 25 of boven de graden komt gaat de rode LED aan en de groene uit.

  Extra Opdracht 2:
  Breid de schakeling uit met een 3de LED (geel)
  De groene LED brandt als de temperatuur tussen de 27 en 28 graden is
  De oranje brandt als de temperatuur tussen 25 en 27 is of tussen de 28 en 30 graden.
  De rode LED brandt onder de 25 graden en boven de 30 graden.

*/

