void setup() {
  Serial.begin(9600); // Set the baud rate to match Octave code
}

void loop() {
  // Generate synthetic data (replace this with your actual data)
  int data = random(0, 1023); // Example: Generate random data between 0 and 1023
  
  // Scale data to fit within desired range (0-255 for Serial Plotter)
  int scaled_data = map(data, 0, 1023, 0, 255); // Map data to fit within 0-255 range
  
  // Send scaled data to Serial Plotter
  Serial.println(scaled_data); // Print scaled data with newline
  
  delay(100); // Delay for stability (adjust as needed)
}

