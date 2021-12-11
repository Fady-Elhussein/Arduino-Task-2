int sensorPin = A0;
int sensorPin2 = A1;
int BuzzerPin = 9;
int count=0;
int out=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT);
  pinMode(BuzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    
  int sensorValue = analogRead(sensorPin);
  int sensorValue2 = analogRead(sensorPin2);
  Serial.println( count);
  Serial.println( out);

  if(sensorValue <=300)
  {
     count +=1 ;
    delay(2000);
    
  }
  
   if(  sensorValue2 >=200)
  {
    if(count>0){
     out=count-1 ;
    delay(2000);
     count=out;
    }
    
  }
  if (count >5)
  {
analogWrite(BuzzerPin, 255); 
delay(500);
analogWrite(BuzzerPin, 155);
delay(500);
analogWrite(BuzzerPin, 255);
delay(500);
analogWrite(BuzzerPin, 155);
delay(500);
    
  }
  if(count <5)
  {
    analogWrite(BuzzerPin, 0); 
  delay(500);
    
  }

  

}
