int Led = 13;
int interval = 500;
void setup (){
  pinMode (Led, OUTPUT);
}

void loop () {
  dot();
  dot();
  dot();
  letterSpatie();
  dash();
  dash();
  dash();
  letterSpatie();
  dot();
  dot();
  dot();
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
  delay (interval*6);
}
   
