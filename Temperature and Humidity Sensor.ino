#include <DHT.h>

// Code for DHT11 Temperature and humidity sensor.
 #include "DHT.h"    // including the library of DHT11 temperature and humidity sensor
 #define DHTPIN 2      // Selecting the pin at which we have connected DHT11
 #define DHTTYPE DHT11 // Selecting the type of DHT sensors
 DHT dht ( DHTPIN, DHTTYPE ) ;
 void setup ( ) {
   Serial.begin ( 9600 ) ;
   dht.begin (  ) ;    // The sensor will start working
 }
 void loop ( ) {
   // Reading temperature or humidity may take about 2 seconds because it is a very slow sensor.

float h = dht.readHumidity ( ) ;  // Declaring h a variable and storing the humidity in it.
float t = dht.readTemperature ( ) ; // Declaring t a variable and storing the temperature in it.
  // Checking if the output is correct. If these are NaN, then there is something in it.
   if ( isnan ( t ) || isnan ( h ) ) {
     Serial.println ( " Sensor not working " ) ;
   }

 else

{

Serial.print ( " Temp is " ) ;  
     Serial.print ( t ) ;         // Printing the temperature on display.
     Serial.println ( " *C " ) ;     // Printing “ *C ”  on display.
     Serial.print ( " Humidity in % is : " ) ;                    
     Serial.print ( h ) ;     // Printing the humidity on display
     Serial.print ( " % \t " ) ;     // Printing “%” on display
          
   }
 }
