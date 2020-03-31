const int RedLED = 12;  
const int GreenLED = 33;  
const int BlueLED = 27; 


int ledState=LOW;

unsigned long previousMillis = 0; 
int color=0;

 const long interval=500;

void setup() {
 
  //pinMode(ledPin, OUTPUT);
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);  
  pinMode(BlueLED, OUTPUT);
}

void loop() {
  
  unsigned long currentMillis = millis();

  
  
  if (currentMillis - previousMillis >= interval) {
   
    previousMillis = currentMillis;

   
    if (ledState == LOW) {
      ledState = HIGH;
        color+=1;
        
      }
    else 
    {
      ledState=LOW;
    }  
    
      if(color%6==0)
    {
      digitalWrite(BlueLED, ledState);     
    }
    else if(color%4==0)
    {
      digitalWrite(GreenLED, ledState);  
    }
    else if(color%2==0)
    {
      digitalWrite(RedLED, ledState); 
    }   
  }
 
  
}

  
