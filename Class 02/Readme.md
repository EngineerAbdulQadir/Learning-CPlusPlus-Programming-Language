# Class 02 - C++ Basics

This README serves as a guide for Class 02 where we dive into the basics of C++ programming. The topics covered include "Hello World," primitive data types, type casting, input/output in C++, and basic operators.

## Topics Covered

### 1. **Hello World in C++**
   - **Objective**: Learn how to print a simple "Hello World" message using `cout`.
   - **Example**:
     ```cpp
     cout << "Hello World\nFrom GloProg";
     ```

### 2. **Primitive Data Types**
   Understanding the different data types in C++:
   - **int**: Stores integers (4 bytes)
   - **char**: Stores characters (1 byte)
   - **float**: Stores floating-point numbers (4 bytes)
   - **bool**: Stores boolean values (true/false, 1 byte)
   - **double**: Stores double-precision floating-point numbers (8 bytes)

   **Examples**:
   ```cpp
   int age = 16;
   char grade = 'A';
   float PI = 3.14f;
   bool isSafe = true;
   double price = 100.10;
   ```

   **Checking size of data types**:
   ```cpp
   cout << sizeof(int) << endl;   // Outputs 4 (bytes)
   cout << sizeof(char) << endl;  // Outputs 1 (byte)
   cout << sizeof(float) << endl; // Outputs 4 (bytes)
   cout << sizeof(bool) << endl;  // Outputs 1 (byte)
   cout << sizeof(double) << endl; // Outputs 8 (bytes)
   ```

### 3. **Type Casting**
   - **Objective**: Convert data from one type to another.
   - **Implicit Conversion**: Done automatically by the compiler.
   - **Explicit Conversion (Casting)**: Done manually by the programmer.

   **Example**:
   ```cpp
   char grade = 'A';
   int value = grade;  // Implicit Conversion
   cout << value;  // Outputs 65 (ASCII value of 'A')

   double price = 100.10;
   int newPrice = (int)price;  // Explicit Conversion
   cout << newPrice;  // Outputs 100
   ```

### 4. **Input in C++**
   - Using `cin` to take input from the user.

   **Examples**:
   ```cpp
   int age;
   cout << "Enter your age: ";
   cin >> age;
   cout << "Your age is: " << age << endl;
   
   double price;
   cout << "Enter the price: ";
   cin >> price;
   cout << "The price is: " << price << endl;
   ```

### 5. **Operators**
   C++ offers various operators for performing arithmetic, relational, and logical operations.

   #### 5.1 **Arithmetic Operators**:
   - Sum, Subtraction, Multiplication, Division, Modulo
   - **Examples**:
     ```cpp
     int a = 5, b = 10;
     cout << "Sum: " << a + b << endl;
     cout << "Difference: " << a - b << endl;
     cout << "Product: " << a * b << endl;
     cout << "Quotient: " << a / b << endl;
     cout << "Modulo: " << a % b << endl;
     ```

   #### 5.2 **Relational Operators**:
   - Less than (`<`), Greater than (`>`), Equal to (`==`), Not Equal to (`!=`)
   - **Examples**:
     ```cpp
     cout << (a < b) << endl;  // True (1)
     cout << (a == b) << endl; // False (0)
     ```

   #### 5.3 **Logical Operators**:
   - OR (`||`), AND (`&&`), NOT (`!`)
   - **Examples**:
     ```cpp
     cout << ((a < b) || (a == b)) << endl;  // True (1)
     cout << ((a < b) && (a != b)) << endl;  // True (1)
     ```

### 6. **Unary Operators**
   - **Increment (`++`)** and **Decrement (`--`)** operators.
   - **Pre-increment** vs. **Post-increment**:
     ```cpp
     int a = 10;
     int b = a++;
     cout << "b = " << b << endl; // Outputs 10
     cout << "a = " << a << endl; // Outputs 11
     
     int c = ++a;
     cout << "c = " << c << endl; // Outputs 12
     ```

### 7. **Practice Task**
   **Q1**: Write a program to calculate the sum of two numbers.
   ```cpp
   int a, b;
   cout << "Enter first number: ";
   cin >> a;
   cout << "Enter second number: ";
   cin >> b;
   cout << "Sum is: " << a + b << endl;
   ```

### 8. **Homework**
   - Create a simple calculator that performs the following operations: addition, subtraction, multiplication, division, and modulo.

---

## Conclusion
This class focused on understanding the basics of C++ programming, including primitive data types, input/output operations, and basic operators. Make sure to practice the examples provided and complete the homework assignment to solidify your understanding of the concepts.