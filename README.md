# C++ Dynamic Student Directory Application

A standalone C++ console application designed to manage and display an interactive student directory. The program dynamically captures student records, enforces unique identifier constraints, and structures the records into a clean terminal report.

## Features

* **Dynamic Allocation:** Prompts the user for the total population size to size data storage dynamically.
* **Duplicate ID Prevention:** Implements a continuous validation loop that cross-checks entries to prevent duplicate identification numbers.
* **Robust Input Handling:** Utilizes input stream clearing and whitespace stripping (`ws`) to handle multi-word student names without crashing.
* **Formatted Output Report:** Generates a structured directory review summarizing all verified names and identification keys.

## Requirements and Installation

### Prerequisites
* A C++ compiler supporting standard variable-length arrays or C++11 sequences (such as g++, Clang, or MSVC).

### Compilation
Open your terminal, navigate to the project directory, and compile the source file:

```bash
g++ -o student_directory main.cpp
```

## Usage

Run the compiled binary executable:

```bash
./student_directory
```

### Example Interaction

```text
Enter the number of students: 2

Enter Details for Student 1
Enter Name: John Doe
Enter ID number: 1001

Enter Details for Student 2
Enter Name: Jane Smith
Enter ID number: 1001
Error: ID 1001 is already taken! Please enter your ID.

Enter ID number: 1002

===== STUDENT DIRECTORY =====
Student 1
Name: John Doe
ID: 1001
-------------------
Student 2
Name: Jane Smith
ID: 1002
-------------------
```

## Technical Specification

The software architecture implements core standard library features to manage the state safely:
* `<iostream>`: Facilitates console input stream management and string buffering.
* `<string>`: Supports robust continuous text manipulation and literal matching comparisons.
