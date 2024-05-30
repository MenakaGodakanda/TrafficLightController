#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

// Enumeration for light states
typedef enum {
    RED,    // 0
    GREEN,  // 1
    YELLOW  // 2
} LightState;

// Function declarations
void initializeTrafficLight(); // Initializes the traffic light to the RED state
void changeLightState();       // Changes the traffic light to the next state
LightState getCurrentLightState(); // Returns the current state of the traffic light

#endif // TRAFFIC_LIGHT_H
