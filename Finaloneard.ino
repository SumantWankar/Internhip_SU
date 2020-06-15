#include <Arduino.h>

/*
 * Pin Description
 */
const int Touch_Sensor1 = 0;
const int Touch_Sensor2 = 1;
const int Touch_Sensor3 = 2;
const int Touch_Sensor4 = 3;
const int Touch_Sensor4 = 4;

int Relay1 = 7;
int Relay2 = 8;
int Relay3 = 9;
int Relay4 = 10;
int Relay4 = 11;
/***************************************************************/
void setup()
{
// Set Pins to Outputs Or Inputs 
  pinMode(Touch_Sensor1, INPUT);   // initialize the pushbutton pins as an inputs:
  pinMode(Relay1, OUTPUT);     // initialize the LED pins as an outputs:
  pinMode(Touch_Sensor2, INPUT);   // initialize the pushbutton pins as an inputs:
  pinMode(Relay2, OUTPUT);     // initialize the LED pins as an outputs:
  pinMode(Touch_Sensor3, INPUT);   // initialize the pushbutton pins as an inputs:
  pinMode(Relay3, OUTPUT);     // initialize the LED pins as an outputs:
  pinMode(Touch_Sensor4, INPUT);   // initialize the pushbutton pins as an inputs:
  pinMode(Relay4, OUTPUT);     // initialize the LED pins as an outputs:
  Serial.begin(9600);
}



int buttonstate1 = LOW;
int state1 = LOW;
int buttonstate2 = LOW;
int state2 = LOW;
int buttonstate3 = LOW;
int state3 = LOW;
int buttonstate4 = LOW;
int state4 = LOW; //To hold the switch state.
/***************************************************************/


void loop() 
{
buttonstate1 = digitalRead(0); // Reading digital data from the A5 Pin of the Arduino.
buttonstate2 = digitalRead(1);
buttonstate3 = digitalRead(2);
buttonstate4 = digitalRead(3);
buttonstate4 = digitalRead(3);

if(buttonstate1 == HIGH)
{
            delay(250); // de-bounce delay.
            if(buttonstate1 == HIGH) 
            {
                        state1 = ~state1; // Changing the state of the switch.
                         digitalWrite(Relay1, state1);
            }
}

if(buttonstate2 == HIGH)
{
            delay(250); // de-bounce delay.
            if(buttonstate2 == HIGH) 
            {
                        state2 = ~state2; // Changing the state of the switch.
                         digitalWrite(Relay2, state2);
            }
}

if(buttonstate3 == HIGH)
{
            delay(250); // de-bounce delay.
            if(buttonstate3 == HIGH) 
            {
                        state3 = ~state3; // Changing the state of the switch.
                         digitalWrite(Relay3, state3);
            }
}

if(buttonstate4 == HIGH)
{
            delay(250); // de-bounce delay.
            if(buttonstate4 == HIGH) 
            {
                        state4 = ~state4; // Changing the state of the switch.
                         digitalWrite(Relay4, state4);
            }
}
}
/***************************************************************/
