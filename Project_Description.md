# Traffic Light Controller - Version 1

This project simulates a simple embedded system of a traffic light controller using C programming language in a POSIX environment.

## Features of the project:

1. Real-time Operating System (RTOS) Simulation: Although it's not a true RTOS, the project utilizes POSIX threads to simulate real-time behavior. Each thread represents a component of the traffic light system.

2. Threaded Architecture: The project demonstrates a multi-threaded architecture where different functionalities, such as traffic light control and main program execution, are handled by separate threads.

3. State Machine Implementation: The traffic light controller implements a simple state machine to manage the behavior of the traffic lights. It cycles through states of RED, GREEN, and YELLOW in a predefined sequence.

4. Modular Design: The project is organized into separate source files (`main.c` and `traffic_light.c`) and header files (`traffic_light.h`), following a modular design approach. This enhances code maintainability and reusability.

5. Concurrency Handling: The project utilizes POSIX threads for concurrency handling. It demonstrates how to create and manage threads using the pthread library, ensuring synchronization and coordination between different parts of the system.

6. Build Automation with Makefile: The project includes a Makefile for automating the build process. It compiles the source files and generates the executable with the specified compiler flags and dependencies.

7. Version Control with Git: Git is used for version control, allowing for easy tracking of changes and collaboration on the project. The project structure includes an initialized Git repository.

8. Documentation: The project includes a README.md file that provides an overview of the project, directory structure, tools used, build instructions, and licensing information. Clear documentation is essential for understanding and using the project.

9. Portable and Platform-independent: The project is designed to be portable and platform-independent, thanks to its reliance on open-source tools and POSIX-compliant APIs. It can be compiled and run on different POSIX-compatible operating systems without modification.

Overall, the project effectively demonstrates the principles of embedded systems development and showcases proficiency in C programming using open-source tools and simulated environments.

## Model-based Diagram:

Below is a simplified model-based diagram representing the structure and interactions within the traffic light controller project.

<img width="423" alt="Screenshot 2024-05-30 at 4 59 14 PM" src="https://github.com/MenakaGodakanda/TrafficLightController/assets/156875412/3da8dbed-6f54-4eaa-a31f-c86c6493bf49"> <br>

In this diagram:

- The "Main Program" creates and manages the "Traffic Light Controller Thread".
- The "Traffic Light Controller Thread" interacts with the "Traffic Light Controller" to manage state changes and traffic light behavior.
- The "Traffic Light Controller" contains the logic for the traffic light behavior and state transitions.
- The "Traffic Light State Machine" represents the states and transitions of the traffic light system.

## Project Structure:
<img width="194" alt="Screenshot 2024-05-30 at 5 23 47 PM" src="https://github.com/MenakaGodakanda/TrafficLightController/assets/156875412/9c427dd1-1995-461a-8fda-88e8ffd22655">



## Coding Details:

### Header File (traffic_light.h)
The header file contains the declarations for the traffic light controller functions and the LightState enumeration.
- Enumeration (LightState): Defines the possible states of the traffic light (RED, GREEN, YELLOW).
- Function Declarations: Declares functions for initializing the traffic light, changing its state, and getting the current state.

### Traffic Light Controller Implementation (traffic_light.c)
The implementation file contains the definitions of the functions declared in the header file.
- Static Variable (currentState): Holds the current state of the traffic light.
- initializeTrafficLight Function: Sets the initial state of the traffic light to RED.
- changeLightState Function: Transitions the traffic light to the next state in the sequence.
- getCurrentLightState Function: Returns the current state of the traffic light.

### Main Program (main.c)
The main program uses POSIX threads to simulate the operation of the traffic light controller.
- trafficLightController Function: This function is executed in a separate thread. It initializes the traffic light and continuously changes its state, printing the current state every second.
- main Function:
  - Creates a new thread to run the trafficLightController function.
  - Joins the thread (waits for it to finish, which it never will in this infinite loop).
 
### Build and Run the Project (Makefile)
The Makefile automates the build process.
- Variables:
  - CC: The compiler to use (gcc).
  - CFLAGS: Compiler flags, including the include directory and pthread flag.
  - DEPS: Header file dependencies.
  - OBJ: Object files to be created.

- Rules:
  - %.o: %.c $(DEPS): Compiles .c files into .o files.
  - TrafficLightController: Links the object files into the final executable.
  - .PHONY: clean: Declares the clean target as phony (not a real file).
  - clean: Removes object files and the executable.

#### Building the Project
- To build the project, run:<br>
`make`

##### Running the Project
- To run the project, execute the built executable:<br>
`./TrafficLightController`







