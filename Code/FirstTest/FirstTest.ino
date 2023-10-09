const int pinoC = 9;
const int pinoD = 8;
const int pinoE = 7; 
const int pinoBuzzer = 10; 

void setup() {
pinMode(pinoC, INPUT_PULLUP);
pinMode(pinoD, INPUT_PULLUP);
pinMode(pinoE, INPUT_PULLUP);

pinMode(pinoBuzzer, OUTPUT);
digitalWrite(pinoBuzzer, LOW);
}


void loop(){
  if(digitalRead(pinoC) == LOW){
      tone(pinoBuzzer, 278);
      delay(200);
  }
  
  else if(digitalRead(pinoD) == LOW){
      tone(pinoBuzzer, 312);
      delay(200);
  }

  else if(digitalRead(pinoE) == LOW){
      tone(pinoBuzzer, 350);
      delay(200);
  }
  else{
    digitalWrite(pinoBuzzer, LOW);
    
  }
  
}
