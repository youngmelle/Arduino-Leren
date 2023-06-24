int Led = 13;
void setup (){
  pinMode (Led, OUTPUT);
}

void loop () {
  
  digitalWrite(Led, HIGH);  //dot
  delay (500);              //dotlengte
  digitalWrite(Led, LOW);   //symboolspatie
  delay(500);               //symboolspatie lengte = dotlengte       
  digitalWrite(Led, HIGH);  //dot
  delay (500);
  digitalWrite(Led, LOW);
  delay(500);
  digitalWrite(Led, HIGH);  //dot
  delay (500);
  digitalWrite(Led, LOW);   //letterspatie
  delay(1500);              //letterspatie lengte = 3 x dotlengte
  digitalWrite(Led, HIGH);  //dash
  delay (1500);             //dashlengte is 3x dotlengte
  digitalWrite(Led, LOW);   //symboolspatie
  delay(500);               //symboolspatie lengte = dotlengte
  digitalWrite(Led, HIGH);  //dash
  delay (1500);
  digitalWrite(Led, LOW);
  delay(500);
  digitalWrite(Led, HIGH);  //dash
  delay (1500);
  digitalWrite(Led, LOW);   //letterspatie
  delay(1500);
  digitalWrite(Led, HIGH);  //dot
  delay (500);
  digitalWrite(Led, LOW);   
  delay(500);
  digitalWrite(Led, HIGH);  //dot
  delay (500);
  digitalWrite(Led, LOW);
  delay(500);
  digitalWrite(Led, HIGH);  //dot
  delay (500);
  digitalWrite(Led, LOW);   //woordspatie
  delay(3500);              //woordspatie lengt = 7x dotlengte
}
   
