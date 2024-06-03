# Project 1 2023/24 2

## Project Instructions: [20 Marks – 24 Hours]
You are required to provide appropriate model and specifications of the Elevator system using an UPPAAL and Z notation based on the following requirements:

- This project is a collaborative effort, with each group limited to a maximum of 2 members.
- Each student is responsible for individual tasks based on the task division agreed upon within the group.
- Submit a report accompanied by a detailed explanation of your proposed model.
- This project must be submitted by 12:00 PM on 16 JUNE 2024 (SUNDAY).
- Plagiarism will result in a score of 0 for this project.

### Questions
Elevators, also known as lifts in some regions, are a common means of vertical transportation in buildings. The basic principle of how an elevator works involves a system of mechanical and electrical components working together to move the elevator car (the platform that carries passengers or goods) between different floors of a building.

An elevator control system needs to be specified. The elevator can be in one of several states (Idle, Moving Up, Moving Down) and can receive commands to go to specific floors. The elevator should move to the requested floor efficiently and safely.

The basic operation of an elevator involves the motor winding or unwinding the cables to move the elevator car up or down the shaft. During this process, the control system will record the position of current floor before the elevator move to the up or down. When passengers inside the elevator or people on the outside press a button to select a floor, the elevator control system needs to know the current position of the elevator. Recording the current floor helps the system understand where the elevator is in the building.

Furthermore, Knowing the current floor position allows the control system to operate the elevator with precision. It ensures that the elevator stops accurately at the designated floor, aligning the car with the floor level for safe and convenient boarding and disembarking. Other than that, the control system should know the position of the elevator car during its movement, either on the designated or actual floor or between floors so that it can avoid the elevator car stopping between floors in the building. Thus, the safety mechanisms are in place to protect passengers and the elevator itself.

In case of emergencies or power outages, recording the current floor position is vital. It allows the elevator to resume normal operation from the last recorded position once power is restored or the emergency situation is resolved. This helps avoid unexpected movements or disruptions.

The control system should also handle edge cases, such as doors getting stuck or emergencies. The emergency brake is a crucial safety feature. It activates in the event of a malfunction or power failure to stop the elevator and prevent it from moving unexpectedly. Besides that, the door interlocks ensure that the elevator doors are securely closed before the elevator can move. The Elevators often have systems in place to detect overloading and prevent the elevator from moving if the weight limit is exceeded.

#### Based on the information above:
1. Let's say a hotel building has 5 floors. Each level of the hotel has a different role, Level 1 and 2 are for car parking while Level 3 is the hotel lobby and Levels 4 to 5 are for exclusive hotel rooms. For this hotel building, the elevator movement will start at Level 3 which is the hotel lobby. You need to propose an UPPAAL model for:
    - Calling the elevator to a particular floor
    - Elevator movement
    - Open and close the door to describe the actions of opening and closing the doors
    - The emergency will stop the elevator when the emergency happened.
    - The load exceeds the limit
2. You have to propose the Z formal specification as the scenario above. You can use a Z tool that supports the Z notation to further analyze, validate, and refine this specification to match the specific requirements of your elevator control system.

Good Luck and Have a Nice Day.
