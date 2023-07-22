# SIMPLE_SHELL TEAM PROJECT

## Introduction
A simple shell is a minimalistic and lightweight program that provides a text-based interface to interact with an operating system.
This is a team project that aims to build a basic command-line interpreter for Unix-like operating systems.
This project is designed to allow users to execute various commands amd pass arguments just like a standard Unix shell.
It serves as a learning exercise for understanding the fundermentals of shell scripting and systen programming.

### Features
 Interactive command-line interface
 Execution of commands with arguments
 Basic error handling
 Support for buit-in shell commands (e.g 'exit')
 Custom error messages.

#### Built With
 This project was built using;
 C programming language
 Linux - Unix-like operating system
 GCC - A C compiler

##### Files
 * shell.h - contains all headers and function prototypes
 * shell.c - contains main function of the  of the program
 * print_env.c - prints enviroment
 * get_env.c gets enviroment variable
 * checkInput.c - function to accept user input
 * checkForPipes.c - function to check for pipes


###### Installation
 To install the simple shell one can follow these steps:
 1. git clone <https://github.com/KelvinoKing/simple_shell.git>
 2. Navigate to the project repo <cd simple_shell>
 3. compile the files <gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh>
 4. run the shell writing <./hsh>


###### Contributors
- **Kelvino Gachihi**
- **Fardosa Hassan**
