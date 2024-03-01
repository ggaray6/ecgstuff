void setup() {
  Serial.begin(9600); // Set the baud rate to match Octave code
}

void loop() {
  // Check if data is available to read from serial
  if (Serial.available() > 0) {
    // Read the incoming byte
    int data = Serial.parseInt(); // Assuming data is sent as integer
    
    // Plot data on Serial Plotter
    Serial.println(data); // Print data to Serial Plotter
  }
}

