const int pinoC = 22;
const int pinoD = 23;
const int pinoE = 24; 
const int pinoF = 27;
const int pinoG = 28;
const int pinoA = 29; 
const int pinoB = 30;
const int pinoBuzzer = 10; 

void setup() {
pinMode(pinoC, INPUT_PULLUP);
pinMode(pinoD, INPUT_PULLUP);
pinMode(pinoE, INPUT_PULLUP);
pinMode(pinoF, INPUT_PULLUP);
pinMode(pinoG, INPUT_PULLUP);
pinMode(pinoA, INPUT_PULLUP);
pinMode(pinoB, INPUT_PULLUP);

pinMode(pinoBuzzer, OUTPUT);
digitalWrite(pinoBuzzer, LOW);
}


void loop(){
  if(digitalRead(pinoC) == LOW){
      tone(pinoBuzzer, 261);
      delay(200);
  }
  
  else if(digitalRead(pinoD) == LOW){
      tone(pinoBuzzer, 293);
      delay(200);
  }

  else if(digitalRead(pinoE) == LOW){
      tone(pinoBuzzer, 329);
      delay(200);
  }
   else if(digitalRead(pinoF) == LOW){
      tone(pinoBuzzer, 349);
      delay(200);
  }

  else if(digitalRead(pinoG) == LOW){
      tone(pinoBuzzer, 392);
      delay(200);
  }
   else if(digitalRead(pinoA) == LOW){
      tone(pinoBuzzer, 440);
      delay(200);
  }

  else if(digitalRead(pinoB) == LOW){
      tone(pinoBuzzer, 493);
      delay(200);
  }
  else{
    digitalWrite(pinoBuzzer, LOW);
    
  }
  
}

