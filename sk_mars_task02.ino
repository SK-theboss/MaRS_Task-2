char choice;
int speed_pin1 = 9;
int speed_pin2 = 6;
int motor1_pin = 2;
int motor2_pin = 4;

void setup()
{
  pinMode(speed_pin1, OUTPUT);
  pinMode(speed_pin2, OUTPUT);
  pinMode(motor1_pin, OUTPUT);
  pinMode(motor2_pin, OUTPUT);

   Serial.begin(9600);
  Serial.println("Hello Marsians !!!");
  Serial.println("Enter W-A-S-D");
  

}

void loop()
{ 
  if (Serial.available() > 0){
    choice = Serial.read();

    if (choice == 'W'){
      Serial.println("W - Forward");
      
      digitalWrite(motor1_pin,HIGH);
      digitalWrite(motor2_pin,HIGH);
      analogWrite(speed_pin1,100);
      analogWrite(speed_pin2,100); 

      delay(1000);
    }

    if (choice == 'A'){
      Serial.println("A - Left");
      analogWrite(speed_pin1,100);
      analogWrite(speed_pin2,0);
      digitalWrite(motor1_pin,HIGH);
      digitalWrite(motor2_pin,LOW);

      delay(1000);
    }

    if (choice == 'D'){
      Serial.println("D - Right");
      analogWrite(speed_pin1,0);
      analogWrite(speed_pin2,100);
      digitalWrite(motor1_pin,LOW);
      digitalWrite(motor2_pin,HIGH);

      delay(1000);
    }

    if (choice == 'S'){
      Serial.println("S - Backward");
      analogWrite(speed_pin1,100);
      analogWrite(speed_pin2,100);
      digitalWrite(motor1_pin,LOW);
      digitalWrite(motor2_pin,LOW);

      delay(1000);
    }
  }
}