/*
  Blink
  Laat een led aan en uit schakelen, keer op keer.
  
 */
  
  // De led is aangesloten op pin 13
  int led = 13;

  // Het programmablok void setup wordt eenmaal beschreven
  void setup() {                
  // We geven aan dat de led-pin-aansluiting een output is (spanning moet geven) 
  pinMode(led, OUTPUT);     
  }

  // Het programmablok void loop herhaalt zich keer op keer
  void loop() {
  digitalWrite(led, HIGH);   // zet spanning op de led-pin
  delay(1000);               // wacht een seconde (1000 miliseconden)
  digitalWrite(led, LOW);    // zet de spanning van de led-pin af
  delay(1000);               // wacht een seconde
  }
  /* 
  Extra opdracht:
  De LED brandt nu 1 seconde aan; 1 seconde uit. Verander dat in 0,3 s aan en 0,2 s uit.
  */
