# Traffic Light Controller

## Overview
This project simulates a traffic light controller using a real-time operating system (RTOS) approach in a POSIX environment. It demonstrates the use of threads, state machines, and basic embedded system concepts using C programming. <br>
<a href="https://github.com/MenakaGodakanda/TrafficLightController/blob/main/Project_Description.md">Project Description</a>

## Features
- Real-time Operating System (RTOS) Simulation.
- Threaded Architecture.
- State Machine Implementation.
- State Machine Implementation.
- Concurrency Handling.
- Build Automation with Makefile.

## Directory Structure
- `src/`: Source files
  - `main.c`: Main program
  - `traffic_light.c`: Traffic light controller implementation
- `include/`: Header files
  - `traffic_light.h`: Traffic light controller definitions
- `Makefile`: Makefile for building the project

## Tools Used
- GCC: Compiler
  ```sh
  sudo apt update
  sudo apt install build-essential
  ```
- POSIX Threads: For simulating real-time behavior
- Git: Version control
  ```sh
  sudo apt install git
  ```
- VS Code: Code editor
  ```sh
   sudo snap install --classic code
  ```

## How to Build and Run
1. Clone the repository:
    ```sh
    git clone https://github.com/MenakaGodakanda/TrafficLightController
    cd TrafficLightController
    ```
2. Build the project:
    ```sh
    make
    ```
    ![1](https://github.com/MenakaGodakanda/TrafficLightController/assets/156875412/45393b81-4ef3-43a1-9a7b-2a57270c42d8)

3. Run the project:
    ```sh
    ./TrafficLightController
    ```
    ![2](https://github.com/MenakaGodakanda/TrafficLightController/assets/156875412/b07e9ebb-880c-44aa-8fdb-4f6dd3cbc35d)

    The output continuously displays the current state of the traffic light. The numbers correspond to the enum values defined in traffic_light.h:
     - 0 represents RED
     - 1 represents GREEN
     - 2 represents YELLOW

## Further Improvements
- Add Logging: Implement logging to track the state changes.
- Error Handling: Add more robust error handling.
- Unit Tests: Use a testing framework like CMocka to write unit tests for your functions.
- Documentation: Use Doxygen to generate documentation from your code comments.

## License
This project is licensed under the MIT License.
