 #define trigPin 10
 #define echoPin 12
 const int buzzer = 11; 

 float duration, distance;
 
 void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT); 
}

void loop() {
   
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0343;

  Serial.print("Distance = ");
  
              if (distance >=9999  || distance <= 50) {
                 Serial.println("You are Too Close");
                 digitalWrite(buzzer, OUTPUT); 
                 
                 
                 
              }
                      else {
           
            Serial.print(distance);
            Serial.println(" cm");
            delay(500);
            noTone(buzzer); 
          }

}
