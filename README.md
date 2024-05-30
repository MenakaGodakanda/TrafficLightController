# Traffic Light Controller

## Overview
This project simulates a traffic light controller using a real-time operating system (RTOS) approach in a POSIX environment. It demonstrates the use of threads, state machines, and basic embedded system concepts using C programming.

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
3. Run the project:
    ```sh
    ./TrafficLightController
    ```

## License
This project is licensed under the MIT License.
