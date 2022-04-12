# Robotic Arm's code with OpenCR
Open CR's purpose is to move the different motors on the robotic arm. The velocity and acceleration of the motors can be change to adjust the different movements of the robotic arm. To do so, many libraries are used such as *Dynamixel WorkBench* and *Board OpenCR*. 

The robotic arm moves with certain position that are hard coded. These postions can be found in the .cpp file. Each position are teached and put in a matrice. The robotic arm is teached in joint mode. The positions include a pick up and a drop off of the different chess pieces of the game. 

Communication his made between the Raspberry pi and the OpenCR card. The Raspberry pi indicates to the robotic arm what move he must make. The robotic arm replies when he his finished moving the chess piece. 
