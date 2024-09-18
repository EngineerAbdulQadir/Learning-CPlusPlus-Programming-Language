# Class 01 - Learning Guide

This repository contains practice questions and homework exercises to help build foundational programming skills. We will be covering topics such as flowcharts, pseudocode, and implementing solutions for various problems.

## Topics Covered:

### 1. **Flowchart**
   A flowchart is a diagrammatic representation of an algorithm or process. It uses various symbols (like rectangles, diamonds, and arrows) to show the flow of control in solving a problem. Flowcharts are useful in visualizing the steps and decisions involved in a process.

   - **Symbols**:
     - **Oval**: Start or end of a process.
     - **Rectangle** (Process Box): Represents a specific action or task that needs to be carried out. It indicates operations like computations, function calls, or simple actions like "print output" or "read input."
     - **Parallelogram** (Input/Output Box): Represents the input or output of data. It is used to show when data is being taken from the user (input) or displayed to the user (output). Common uses include reading user input from a keyboard or printing results to a screen.
     - **Diamond** (Decision Box): Indicates a point where a decision must be made. It contains a condition or question that leads to two or more possible paths (e.g., Yes/No, True/False). Based on the decision, the flow follows different branches.
     - **Arrows**: Show the flow of control, guiding you from one step to another.

---


### 2. **Pseudocode**
   Pseudocode is a simplified, informal way of representing algorithms that uses a combination of natural language and programming constructs. It is not tied to any specific programming language and is used to outline the logic of the solution before coding.

   - **Purpose**: Helps programmers understand the flow of the program and how various parts of the logic fit together without worrying about syntax.
   - **Example**:
     ```
     If age is greater than or equal to 18
       Print "You are eligible for a driving license"
     Else
       Print "You are not eligible for a driving license"
     ```


---

### 3. **Practice Questions**

### **Practice Qs1**: Write a program to check general logic of solution.

#### **Flowchart**:
1. **Start**
2. **Input**: Take the input for the problem or general test input.
3. **Process**: Implement the logic (could be mathematical, comparison, or some task).
4. **Decision**: Does the output satisfy the condition or expected logic?
   - If Yes, proceed to output the result.
   - If No, recheck the logic or inputs.
5. **Output**: Display the result.
6. **End**

#### **Pseudocode**:
```
Start
   Input value(s) for the general solution.
   Process the values using the required logic.
   If the logic satisfies expected conditions:
      Print the correct result.
   Else:
      Recheck inputs or logic.
End
```

---

### **Practice Qs2**: Write a program to find the area of a square.

#### **Flowchart**:
1. **Start**
2. **Input**: Side length of the square.
3. **Process**: Calculate the area using the formula: Area = side * side.
4. **Output**: Display the area.
5. **End**

#### **Pseudocode**:
```
Start
   Input side
   Area = side * side
   Print Area
End
```

---

### **Practice Qs3**: Write a program that takes a number and checks if it is Odd or Even.

#### **Flowchart**:
1. **Start**
2. **Input**: Take the number as input.
3. **Decision**: Is the number divisible by 2?
   - If Yes: The number is Even.
   - If No: The number is Odd.
4. **Output**: Display whether the number is Odd or Even.
5. **End**

#### **Pseudocode**:
```
Start
   Input number
   If number % 2 == 0:
      Print "Even"
   Else:
      Print "Odd"
End
```

---

### **Practice Qs4**: Write a program to calculate the sum of numbers from 1 to N.

#### **Flowchart**:
1. **Start**
2. **Input**: Enter the value of N.
3. **Initialize**: Set sum = 0.
4. **Loop**: From 1 to N, add each number to sum.
5. **Output**: Display the sum.
6. **End**

#### **Pseudocode**:
```
Start
   Input N
   sum = 0
   For i from 1 to N:
      sum = sum + i
   Print sum
End
```

---

### **Practice Qs5**: Write a program to check if a number is Prime or Not.

#### **Flowchart**:
1. **Start**
2. **Input**: Take the number as input.
3. **Initialize**: Set flag = true.
4. **Loop**: Check divisibility from 2 to sqrt(number).
5. **Decision**: If divisible by any number in the range:
   - Set flag = false (Not Prime).
6. **Output**: If flag = true, the number is Prime; otherwise, it's Not Prime.
7. **End**

#### **Pseudocode**:
```
Start
   Input number
   flag = true
   For i from 2 to sqrt(number):
      If number % i == 0:
         flag = false
         Break
   If flag is true:
      Print "Prime"
   Else:
      Print "Not Prime"
End
```

---

### 4. **Homework Problems**

### a. Calculate “Simple Interest” from Principal (P), Rate (R) & Time (T).
- **Formula**: Simple Interest (SI) = (P * R * T) / 100

### b. Calculate the maximum of 2 numbers.
- **Task**: Write a function that takes two numbers as input and returns the larger one.

### c. Calculate the factorial of a number N.
- **Task**: Write a program to find the factorial of a number. Factorial of N = N * (N-1) * (N-2) * ... * 1.

### d. Given a person’s age, find if they should get a driving license or not.
- **Hint**: Assume the legal driving age is 18 years.


---

### 5. **What to Install?**
   A brief guide on the necessary software tools to set up your C++ programming environment:

   - **C++**: C++ is a powerful, high-performance language used for system programming, game development, and more. You will need both a compiler and an IDE (Integrated Development Environment) to write and run your C++ programs.

   #### Steps to Set Up C++:
   1. **Download and Install MinGW (Minimalist GNU for Windows)**:
      - MinGW provides the GCC (GNU Compiler Collection) which includes the C++ compiler for Windows.
      - **Instructions**:
         1. Go to the [MinGW download page](https://sourceforge.net/projects/mingw/).
         2. Download the installer and run it.
         3. In the installer, select the `mingw32-gcc-g++` package to install the C++ compiler.
         4. Complete the installation and ensure MinGW is added to your system’s **PATH** (the installer typically does this for you).

   2. **Download and Install VS Code**:
      - Visual Studio Code (VS Code) is a lightweight, open-source code editor with support for many languages, including C++. It has extensions that integrate well with MinGW and provide a full C++ development environment.
      - **Instructions**:
         1. Go to the [VS Code download page](https://code.visualstudio.com/Download).
         2. Download and install the version suitable for your operating system (Windows, macOS, Linux).
         3. After installation, open VS Code and install the **C/C++ extension** from the Extensions Marketplace (Ctrl+Shift+X, then search for "C++").
         4. Configure the C++ environment in VS Code to use MinGW for compiling and debugging. This can be done by creating tasks and launch configurations in VS Code.

   3. **Configure VS Code for C++ Development**:
      - Open **VS Code** and configure it to use **MinGW**:
         - Go to the **Terminal** in VS Code, select **New Terminal**, and verify MinGW installation by typing: `g++ --version`.

---