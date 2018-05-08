
// Pin where the relay is connected
int RelaySignalPin = 2;  
int LDR = A0;
float LDRValue = 0.0;

// Setup circuit outputs and inputs
void setup()                    
{
    pinMode(RelaySignalPin, OUTPUT);   
    Serial.begin(9600);
}

// Main loop
void loop()                     
{
  	LDRValue = analogRead(LDR);
  
  	Serial.println(LDRValue);
  
  	if (LDRValue > 600.0)
    {
        // Writes an HIGH signal on port <RelaySignalPin> 
        digitalWrite(RelaySignalPin, HIGH);
    }
    else
    {
      	// Writes an LOW signal on port <RelaySignalPin>     
    	digitalWrite(RelaySignalPin, LOW);  
    }              
}
