
const int trigPin = 10;
const int echoPin = 11;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
}





void loop()
{
long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 74;

  


   if (distance < 85) {
                              digitalWrite(2, LOW);
                              digitalWrite(3, LOW);
                              digitalWrite(4, LOW);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
              
              }
     
   if  (distance < 85) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, LOW);
                              digitalWrite(4, LOW);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }             
       if  (distance < 60) {
                     
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, LOW);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }            
      if  (distance < 45) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }           
      if  (distance < 25) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, LOW);
                              digitalWrite(8, LOW);
    
      }           
      if  (distance < 15) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, HIGH);
                              digitalWrite(8, LOW);
    
      }            
      if  (distance < 10) {
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, HIGH);
                              digitalWrite(8, HIGH);
    
      }

             if (distance < 5) {

                              digitalWrite(8, LOW);

                              delay(250);
                              
                              digitalWrite(2, HIGH);
                              digitalWrite(3, HIGH);
                              digitalWrite(4, HIGH);
                              digitalWrite(5, HIGH);
                              digitalWrite(6, HIGH);
                              digitalWrite(8, HIGH);

                               delay(250);
    
     }
}



