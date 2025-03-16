#include <Keypad.h>

// Define keypad rows and columns
const byte ROWS = 4;  
const byte COLS = 4;  

// Define key mapping
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

// Define row and column pins
byte rowPins[ROWS] = {27, 14, 12, 13}; // Connected to R1, R2, R3, R4
byte colPins[COLS] = {32, 33, 25, 26}; // Connected to C1, C2, C3, C4

// Initialize keypad
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(115200);
}

void loop() {
  char key = keypad.getKey();
  
  if (key) { // If a key is pressed
    Serial.print("Key Pressed: ");
    Serial.println(key);
  }
}
