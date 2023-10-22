# Rotating-bilboard-Screen-cpp
This C++ program takes a string as input and continuously displays the characters of the string in a rotating fashion with a delay of 1 second. It clears the console screen between rotations based on the operating system. The program rotates the characters in the string to create an animated effect.

Here's a breakdown of the program:

It includes the necessary C++ libraries, such as <cstring>, <string>, <iostream>, <thread>, and <chrono>.

It includes platform-specific headers for clearing the console screen using <windows.h> for Windows and <cstdlib> for Unix/Linux.

The display function is defined to display an array of characters.

In the main function:

It reads a string from the user.
The string is then converted into a character array.
The program enters an infinite loop (while (true)) to continuously display the rotating string.
The console screen is cleared using system-specific commands (system("cls") for Windows and system("clear") for Unix/Linux) to give the appearance of animation.
The characters in the character array are rotated to the right, creating the animation effect.
The program will keep rotating the string until it is manually terminated by the user (e.g., by pressing Ctrl+C).

Note: This code may not work correctly on all systems, as it relies on platform-specific commands for screen clearing. Also, the continuous use of system to clear the screen may not be the most efficient or cross-platform way to achieve this effect.
