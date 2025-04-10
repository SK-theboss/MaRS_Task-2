// Declare a variable to store the user's key input
char choice;

// Define pin numbers for speed and motor control
int speed_pin1 = 9;   // PWM pin for Motor 1 speed control
int speed_pin2 = 6;   // PWM pin for Motor 2 speed control
int motor1_pin = 2;   // Direction pin for Motor 1
int motor2_pin = 4;   // Direction pin for Motor 2

void setup()
{
  // Set motor and speed pins as OUTPUT
  pinMode(speed_pin1, OUTPUT);
  pinMode(speed_pin2, OUTPUT);
  pinMode(motor1_pin, OUTPUT);
  pinMode(motor2_pin, OUTPUT);

  // Initialize serial communication
  Serial.begin(9600);

  // Display greeting and instruction
  Serial.println("Hello Marsians !!!");
  Serial.println("Enter W-A-S-D"); // Prompt user for direction input
}

void loop()
{ 
  // Check if any data is available from serial monitor
  if (Serial.available() > 0){
    choice = Serial.read(); // Read the input character

    // Move forward
    if (choice == 'W'){
      Serial.println("W - Forward");

      // Set both motors to move forward
      digitalWrite(motor1_pin, HIGH);
      digitalWrite(motor2_pin, HIGH);

      // Set speed for both motors
      analogWrite(speed_pin1, 100);
      analogWrite(speed_pin2, 100); 

      delay(1000); // Run for 1 second
    }

    // Turn left
    if (choice == 'A'){
      Serial.println("A - Left");

      // Left turn by powering only the right motor
      analogWrite(speed_pin1, 100); // Right motor speed
      analogWrite(speed_pin2, 0);   // Left motor off
      digitalWrite(motor1_pin, HIGH);
      digitalWrite(motor2_pin, LOW);

      delay(1000);
    }

    // Turn right
    if (choice == 'D'){
      Serial.println("D - Right");

      // Right turn by powering only the left motor
      analogWrite(speed_pin1, 0);   // Right motor off
      analogWrite(speed_pin2, 100); // Left motor speed
      digitalWrite(motor1_pin, LOW);
      digitalWrite(motor2_pin, HIGH);

      delay(1000);
    }

    // Move backward
    if (choice == 'S'){
      Serial.println("S - Backward");

      // Both motors in reverse direction
      analogWrite(speed_pin1, 100);
      analogWrite(speed_pin2, 100);
      digitalWrite(motor1_pin, LOW);
      digitalWrite(motor2_pin, LOW);

      delay(1000);
    }
  }
}
