// use command: screen /dev/cu.usbmodem1421 9600
// to connect terminal to Serial
// use command: Ctrl-a k
// to quit screen

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

unsigned long time;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  time = millis();
  
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    //Serial.print("Time: ");
    //time = millis();
    //prints time since program started
    Serial.println(time);
    delay(500);
  }
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
