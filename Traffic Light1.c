#include <reg51.h>

// Define the traffic lights for each intersection
sbit Red1 = P2^0;    // Red light for intersection 1, connected to pin P2.0
sbit Yellow1 = P2^1; // Yellow light for intersection 1, connected to pin P2.1
sbit Green1 = P2^2;  // Green light for intersection 1, connected to pin P2.2

sbit Red2 = P2^3;    // Red light for intersection 2, connected to pin P2.3
sbit Yellow2 = P2^4; // Yellow light for intersection 2, connected to pin P2.4
sbit Green2 = P2^5;  // Green light for intersection 2, connected to pin P2.5

sbit Red3 = P2^6;    // Red light for intersection 3, connected to pin P2.6
sbit Yellow3 = P2^7; // Yellow light for intersection 3, connected to pin P2.7
sbit Green3 = P3^0;  // Green light for intersection 3, connected to pin P3.0

sbit Red4 = P3^1;    // Red light for intersection 4, connected to pin P3.1
sbit Yellow4 = P3^2; // Yellow light for intersection 4, connected to pin P3.2
sbit Green4 = P3^3;  // Green light for intersection 4, connected to pin P3.3

// Delay function for creating a time interval
void delay(unsigned int time) {
    unsigned int i, j;
    for(i = 0; i < time; i++)
        for(j = 0; j < 1275; j++); // Approximate delay to produce a 1 ms delay
}

void main() {
    while(1) {
        // Intersection 1 - Green light ON, all others have Red light ON
        Green1 = 1; Red1 = 0; Yellow1 = 0;  
        Red2 = 1; Yellow2 = 0; Green2 = 0;  
        Red3 = 1; Yellow3 = 0; Green3 = 0;  
        Red4 = 1; Yellow4 = 0; Green4 = 0;  
        delay(500); // Green light duration for intersection 1 (5 seconds)

        // Intersection 1 - Yellow light ON, all others remain Red
        Green1 = 0; Yellow1 = 1;          
        delay(200);                      
        Yellow1 = 0; Red1 = 1;            

        // Intersection 2 - Green light ON, all others Red
        Green2 = 1; Red2 = 0; Yellow2 = 0;  
        Red1 = 1; Yellow1 = 0; Green1 = 0;  
        Red3 = 1; Yellow3 = 0; Green3 = 0;  
        Red4 = 1; Yellow4 = 0; Green4 = 0;             
			  delay(500);
			  // Intersection 2 - Yellow light ON, all others remain Red
        Green2 = 0; Yellow2 = 1;          
        delay(200);                      
        Yellow2 = 0; Red2 = 1; 

      // Intersection 3 - Green light ON, all others have Red light ON
        Green3 = 1; Red3 = 0; Yellow3 = 0;  
        Red2 = 1; Yellow2 = 0; Green2 = 0;  
        Red1 = 1; Yellow1 = 0; Green1 = 0;  
        Red4 = 1; Yellow4 = 0; Green4 = 0;  
        delay(500); // Green light duration for intersection 1 (5 seconds)

        // Intersection 3 - Yellow light ON, all others remain Red
        Green3 = 0; Yellow3 = 1;          
        delay(200);                      
        Yellow3 = 0; Red3 = 1;  

        // Intersection 4 - Green light ON, all others have Red light ON
        Green4 = 1; Red4 = 0; Yellow4 = 0;  
        Red2 = 1; Yellow2 = 0; Green2 = 0;  
        Red3 = 1; Yellow3 = 0; Green3 = 0;  
        Red1 = 1; Yellow1 = 0; Green1 = 0;  
        delay(500); // Green light duration for intersection 1 (5 seconds)

        // Intersection 4 - Yellow light ON, all others remain Red
        Green4 = 0; Yellow4 = 1;          
        delay(200);                      
        Yellow4 = 0; Red4 = 1;  
    }
}
