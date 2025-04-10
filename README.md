# MaRS_Task-2
*Platform:* Arduino Uno 
*Languages Used:* Arduino Simplified C++ 

---

## *Overview*
*Aim:* 
    To control a two-wheel drive mechanism using W, A, S, D keys (it has to be able to go forward, reverse, left and right ) 

*The Journey:* 
    I was initially given the task of creating a color-controlled stepper motor system, and I successfully completed the implementation. Unfortunately, at the time, the stepper motor wasn't functional due to hardware issues. As a result, I was asked to shift my focus and instead work on controlling a two-wheel drive mechanism using the WASD keys. This alternative setup allowed for basic directional control of the system through serial inputs.
    Then I started working on the new task, and everything went smoothly. Within just half an hour, I was able to analyze the requirements, understand the environment, and compile a working code to control the two-wheel drive mechanism using an L293D motor driver. However, as success seemed within reach, I was asked to restart the work using a different module, since the L293D motor driver had been damaged by another contestant.
    I didn’t give up despite the setback. I gave my 100% to the task and quickly adapted to the new hardware. I reworked the setup and successfully compiled the code using the MD10C R3 motor driver, ensuring the two-wheel drive mechanism was fully functional with the updated module.

---

### Cognitive Process and Scope of the task:  
    In a surface level, only direction pins are enough to accomplish this task, keeping the PWM pin values constant for the overall task. But, I imagined a two wheel balance scooter(hoverboard) in my mind. So, I regulated the PWM values accordingly for each and every condition. Example: For a left turn, the left wheel would stop and the right wheel would be HIGH signal and greater PWM.
    This makes my project kind of unique and well-suited for a real time application.

    Also, to get the input from the user during runtime, firstly I used Keyboard function. Then I realised that, this was not compatible in Arduino Uno. Immediately, I switched to Serial.availabe. This was perfect and made my task easier.

  By this way, I accomplished the desired task.
  
---

### Project Completion Summary

- Completed *all Light Dose* problems (Bash scripting and terminal-based tasks)
- Completed *all Medium Dose* problems (Python-based logic, filtering, decoding)
- Completed *Hard Dose*:
  -  Problem 1: Obstacle Map & Pathfinding
  -  Problem 3: Behavior Tree Design
  -  Problem 2: [Not attempted]
---



--

###  *Light Dose*

####  Question 1 & Question 2: 
- I am not very much known to terminal commands in Linux.
- I just know some basic commands.

  *My Approach:*
- Gone through some you-tube vedios to get a idea about Linux Commands related to navigation, file handling, and permissions.
- Googled for unknown commands.
- I broke out the problem into individual checks and tested each block.
- Used echo and if-else blocks to validate system behavior step by step.
  
  *Script:*
- [light_1](./light_1st.sh)
- [light_2](./light_2nd.sh)
  
 *Screenshot of basic terminal commands done on terminal:*
- [Screenshot_1](./btc_ss_1.jpg)
- [Screenshot_2](./btc_ss_2.jpg)
  

---

###  *Medium Dose*

####  Question 1: Marker Navigation
- I just added 55 units to z co_ordinate to get new frame of reference
- And wrote a function to calculate distance from origin
- Got input co_ordinates from user


 *Script:*
- [medium-1](./medium_1st.py)

  ---
