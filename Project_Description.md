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
