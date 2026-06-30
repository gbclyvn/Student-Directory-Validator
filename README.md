# C++ Student Directory Console Application

A dynamic C++ console application designed to manage, calculate, and display student directory records. The program prompts the user to input critical student details—including identification numbers and laboratory scores—and automatically processes their performance metrics.

## Features

* **Dynamic Data Input:** Captures individual student IDs and multiple laboratory scores sequentially.
* **Automated Processing:** Computes the precise average of three lab scores instantly.
* **Formatted Output:** Displays calculated averages formatted to exactly four decimal places for precision grading.

## Requirements and Installation

### Prerequisites
* A C++ compiler supporting C++11 or higher (such as g++, Clang, or MSVC).

### Compilation
Open your terminal or command prompt, navigate to the project folder, and compile the program using:

```bash
g++ -o student_directory main.cpp
```

## Usage

Run the compiled executable application:

```bash
./student_directory
```

### Example Interaction

```text
Enter Students ID: 2025-1098
Enter Lab 1 Score: 85.5
Enter Lab 2 score: 90.0
Enter Lab 3 score: 88.25

StudentsID:   2025-1098
Average Score: 87.9167
```

## Code Architecture

The program relies on standard C++ libraries to handle data processing and formatting:
* <iostream>: Manages standard console input and output streams.
* <iomanip>: Utilizes setprecision and fixed manipulators to enforce strict decimal formatting on the calculated averages.
