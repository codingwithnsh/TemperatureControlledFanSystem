#include <DHT.h>

#define DHTPIN 2        // Pin connected to the DHT11 sensor
#define DHTTYPE DHT11   // Define the sensor type

DHT dht(DHTPIN, DHTTYPE);

// Define the relay pin
const int relayPin = 3;

// Define temperature threshold (in Celsius)
const float tempThreshold = 30;

void setup() {
  // Start the serial communication
  Serial.begin(9600);

  // Initialize the DHT sensor
  dht.begin();

  // Set the relay pin as output
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // Wait a few seconds between readings
  delay(2000);

  // Read the temperature in Celsius
  float temperature = dht.readTemperature();

  // Check if reading is successful
  if (isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print the temperature to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Control the fan based on the temperature
  if (temperature > tempThreshold) {
    // Turn the fan on if temperature exceeds threshold
    digitalWrite(relayPin, HIGH);
    Serial.println("Fan ON");
  } else {
    // Turn the fan off if temperature is below threshold
    digitalWrite(relayPin, LOW);
    Serial.println("Fan OFF");
  }
}
