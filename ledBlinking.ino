
int LED = 9;
bool currBrightness = LOW;
long long prevTime =0;
byte poten = A0;
int toggle = 4; 
int interval = 0;
int state = 0;
int step = 50;
void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(toggle,INPUT);


}

void loop()
{ 	long long currTime = millis(); 
	int button = digitalRead(toggle);
    if(button==HIGH){
 		int input  = analogRead(poten);
      	interval =map(input,0,1028,50,150);
      if(currTime-prevTime>=200-interval){
      	prevTime = currTime;
        digitalWrite(LED,currBrightness);
        currBrightness=!currBrightness;
      }
    }else{
         digitalWrite(LED,LOW);
    }
}
