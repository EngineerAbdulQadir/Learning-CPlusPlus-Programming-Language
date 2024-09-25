# Class 03: C++ Programming - Conditional Statements and Loops

This session covers the use of conditional statements, loops, and ternary operators in C++. Below is a detailed breakdown of the key topics, code snippets, and concepts that were discussed in the class.

## Topics Covered

### 1. Conditional Statements
- **If-Else Statement**:
  The `if-else` statement is used to execute a block of code based on a condition.
  ```cpp
  int n = 45;

  if (n >= 0) {
      cout << "N Is Positive\n";
  } else {
      cout << "N Is Negative\n";
  }
  ```

  Example with a negative number:
  ```cpp
  int n = -45;

  if (n >= 0) {
      cout << "N Is Positive\n";
  } else {
      cout << "N Is Negative\n";
  }
  ```

- **Age Check (Voting Eligibility)**:
  ```cpp
  int age;
  cout << "Enter Your Age: ";
  cin >> age;

  if (age >= 18) {
      cout << "You Can Vote";
  } else {
      cout << "You Can't Vote";
  }
  ```

- **Even or Odd Check**:
  ```cpp
  int n;
  cout << "Enter The Number: ";
  cin >> n;

  if (n % 2 == 0) {
      cout << "Even";
  } else {
      cout << "Odd";
  }
  ```

- **Else-If Ladder (Grades Based on Marks)**:
  ```cpp
  int marks;
  cout << "Enter Your Marks: ";
  cin >> marks;

  if (marks >= 90) {
      cout << "A\n";
  } else if (marks >= 80 && marks < 90) {
      cout << "B\n";
  } else {
      cout << "C\n";
  }
  ```

### 2. Practice Questions (Character Check)
- **Find if the Character is Uppercase or Lowercase**:
  
  - **Way 1 (Using ASCII Range)**:
    ```cpp
    char ch;
    cout << "Enter The Character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "lowercase\n";
    } else {
        cout << "UPPERCASE\n";
    }
    ```

  - **Way 2 (Using ASCII Codes)**:
    ```cpp
    char ch;
    cout << "Enter The Character: ";
    cin >> ch;

    if (ch >= 65 && ch <= 90) {
        cout << "UPPERCASE\n";
    } else {
        cout << "lowercase\n";
    }
    ```

### 3. Ternary Operator
A compact version of the `if-else` statement using the ternary operator.
```cpp
int n = 45;
cout << (n >= 0 ? "Positive" : "Negative") << endl;

int m = -45;
cout << (m >= 0 ? "Positive" : "Negative") << endl;
```

### 4. Loops

- **While Loop**:
  - **Print Numbers from 1 to 5**:
    ```cpp
    int count = 1;
    while (count <= 5) {
        cout << count << " ";
        count++;
    }
    cout << endl;
    ```

  - **Print Numbers from 1 to `n`**:
    ```cpp
    int n = 20;
    int count = 1;
    while (count <= n) {
        cout << count << " ";
        count++;
    }
    cout << endl;
    ```

  - **Infinite Loop (Example)**:
    ```cpp
    int n = 50;
    int count = 1;
    while (count <= n) {
        cout << count << " ";
        // Missing the increment, leading to an infinite loop
    }
    cout << endl;
    ```

- **For Loop**:
  - **Print Numbers from 1 to `n`**:
    ```cpp
    int n = 10;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    ```

  - **Print Odd Numbers from 1 to `n`**:
    ```cpp
    int n = 10;
    for (int i = 1; i <= n; i = i + 2) {
        cout << i << " ";
    }
    cout << endl;
    ```

- **Practice Question (Sum of Numbers from 1 to `n`)**:
  ```cpp
  int n = 3;
  int sum = 0;

  for (int i = 0; i <= n; i++) {
      sum += i;
  }
  cout << "Sum = " << sum << endl;
  ```

### 5. Break Statement
Used to exit a loop early.
```cpp
int n = 50;
int sum = 0;

for (int i = 0; i <= n; i++) {
    sum += i;
    if (i == 5) {
        break;
    }
}
cout << "Sum = " << sum << endl;
```

### 6. Do-While Loop
Ensures the loop runs at least once.
```cpp
do {
    cout << "Hello World!\n";
} while (3 > 5);
```

### 7. Prime Number Check
Check whether a number is prime.
```cpp
int n = 11;
bool isPrime = true;

for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
        isPrime = false;
        break;
    }
}

if (isPrime) {
    cout << "Prime Number\n";
} else {
    cout << "Non Prime Number\n";
}
```

### 8. Nested Loops
Loops within loops, used for various tasks such as printing patterns.
```cpp
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
        cout << "*";
    }
    cout << endl;
}
```

## Homework
- Sum of numbers from 1 to `n` using the `while` loop.
- Sum of all odd numbers from 1 to `n` using the `while` loop.
- Sum of all even numbers from 1 to `n` using both `for` and `while` loops.
- Sum of all numbers from 1 to `n` divisible by 3 (using both loops).
- Print the factorial of a number `n`.
