// This sketch is for controlling the power to usb ports on a hub, where the 5v line 
//is broken through a mosfet controlled by a digital pin
// Read data from the serial and turn ON or OFF a pwr switch depending on the value
char val; // Data received from the serial port
const int ledPin = 13; // Set the pin to digital I/O 4
const int enablePort1 = 3; // switch pin to enable port1 pwr
const int enablePort2 = 5; // switch pin to enable port2 pwr
const int enablePort3 = 7; // switch pin to enable port3 pwr
const int enablePort4 = 9; // switch pin to enable port4 pwr
const int enablePort5 = 11; // switch pin to enable port5 pwr

void setup()
{
pinMode(ledPin, OUTPUT); // Set pin as OUTPUT
pinMode(enablePort1, OUTPUT); // pin for enable port1 pwr
pinMode(enablePort2, OUTPUT); // pin for enable port2 pwr
pinMode(enablePort3, OUTPUT); // pin for enable port3 pwr
pinMode(enablePort4, OUTPUT); // pin for enable port4 pwr
pinMode(enablePort5, OUTPUT); // pin for enable port5 pwr


Serial.begin(9600); // Start serial communication at 9600 bps
// prints title with ending line break
Serial.println("Power On");
val='h';
}

void loop() {
if (Serial.available()) { // If data is available to read,
val = Serial.read(); // read it and store it in val
}
switch (val){
    case 'q':    
      digitalWrite(enablePort1, HIGH);
      break;
    case 'w':    
      digitalWrite(enablePort2, HIGH);
      break;
    case 'e':    
      digitalWrite(enablePort3, HIGH);
      break;
    case 'r':    
      digitalWrite(enablePort4, HIGH);
      break;
    case 't':    
      digitalWrite(enablePort5, HIGH);
      break;
    case 'y':    
      digitalWrite(ledPin, HIGH);
      break;
    case 'a':    
      digitalWrite(enablePort1, LOW);
      break;
    case 's':    
      digitalWrite(enablePort2, LOW);
      break;
    case 'd':    
      digitalWrite(enablePort3, LOW);
      break;
    case 'f':    
      digitalWrite(enablePort4, LOW);
      break;
    case 'g':    
      digitalWrite(enablePort5, LOW);
      break;
    case 'h':    
      digitalWrite(ledPin, LOW);
      break;
}



delay(10); // Wait 10 milliseconds for next reading
}
