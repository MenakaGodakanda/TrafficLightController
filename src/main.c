#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include "traffic_light.h"

// Function that runs in a separate thread to control the traffic light
void* trafficLightController(void* arg) {
    initializeTrafficLight();
    while (1) {
        printf("Current Light: %d\n", getCurrentLightState());
        changeLightState();
        sleep(1); // Simulate delay for changing lights
    }
    return NULL;
}

int main() {
    pthread_t trafficLightThread;
    
    // Create a new thread to run the traffic light controller
    if (pthread_create(&trafficLightThread, NULL, trafficLightController, NULL)) {
        fprintf(stderr, "Error creating thread\n");
        return 1;
    }
    
    // Wait for the traffic light controller thread to finish (it never will in this case)
    if (pthread_join(trafficLightThread, NULL)) {
        fprintf(stderr, "Error joining thread\n");
        return 2;
    }
    
    return 0;
}
