#include <stdio.h>
#include <unistd.h>
#include "traffic_light.h"

// Static variable to hold the current state of the traffic light
static LightState currentState = RED;

// Initializes the traffic light to the RED state
void initializeTrafficLight() {
    currentState = RED;
}

// Changes the traffic light to the next state
void changeLightState() {
    switch (currentState) {
        case RED:
            currentState = GREEN;
            break;
        case GREEN:
            currentState = YELLOW;
            break;
        case YELLOW:
            currentState = RED;
            break;
    }
}

// Returns the current state of the traffic light
LightState getCurrentLightState() {
    return currentState;
}
