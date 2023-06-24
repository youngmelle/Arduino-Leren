int Led = 13;
int interval = 500;
void setup (){
  pinMode (Led, OUTPUT);
}

void loop () {
  letter ('s');
  letter ('o');
  letter ('s');
  woordSpatie();
}
  
 void dot (){
  digitalWrite(Led, HIGH);
  delay (interval);
  digitalWrite(Led, LOW);
  delay(interval);
}
 
 void dash (){
  digitalWrite(Led, HIGH);
  delay (interval*3);
  digitalWrite(Led, LOW);
  delay(interval); 
} 

void letterSpatie(){
  delay (interval*2);
}

void woordSpatie(){
  delay (interval*4);
}

void letter (char c){
  switch (c){
    case 's':
    dot();dot();dot();
    break;
    case 'o':
    dash(); dash(); dash();
    break;
  }
  letterSpatie();
}



Opdracht:
Voeg letters toe zodat je eigen naam in morse-code wordt weergegeven 
