/*
  Een vervolg op Les 11A. Nu hebben we de ingang analoog gemaakt met een potmeter.
  We gaan het dimmen van de LED de het analoge ingangswaarde koppelen.


*/
int led = 11;      // led aan pin 11
int pot = A0;      // potmeter aan A0
int val = 0;       // variable waarde van de potmeter

void setup() {
  pinMode(led, OUTPUT);   // ledpin is output
}

void loop() {
  val = analogRead(pot);   // lees de waarde van de potmeter

  analogWrite(led, val / 4);  // lees de waarde van de potmeter en deel het getal door 4.
  //De uitkomst wordt de analoge waarde van de led.
  // hier is een handigheidje toegepast, je ziet dat Arduino ook kan rekenen!

}



