#include <iostream>
using namespace std;

int main() {

    // Hello World In C++
    // cout<<"Hello World\n From GloProg"; -1

    // Primitive Data Types

    /// Integers
    // int = 4bytes
    
    // int age = 16;
    // cout<<"age" << endl;

    // int age = 16;
    // cout<<age << endl;

    // Check Bits
    // int age = 16;
    // cout<< sizeof(age) << endl;


    /// Characters
    // char = 1byte

    // char grade = 'A';
    // cout<< "grade" << endl;

    // char grade = 'A';
    // cout<< grade << endl;

    // Check Bits
    // char grade = 'A';
    // cout<< sizeof(grade) << endl;


    /// Float
    // float = 4bytes

    // float PI = 3.14f;
    // cout << "PI" << endl;

    // float PI = 3.14f;
    // cout << PI << endl;

    // Check Bits
    // float PI = 3.14f;
    // cout << sizeof(PI) << endl;


    /// Boolean
    // bool = 1byte

    // bool isSafe = true;
    // cout << "isSafe" << endl;

    // Output is 1 Because true represent 1
    // bool isSafe = true;
    // cout<< isSafe << endl; 

    // Output is 0 Because false represent 0
    // bool isSafe = false;
    // cout<< isSafe << endl;

    // Check Bits
    // bool isSafe = false;
    // cout<< sizeof(isSafe) << endl;


    /// Double
    // double = 8bytes

    // double price = 100.10;
    // cout<< "price" << endl;

    // double price = 100.10;
    // cout<< price << endl;

    // double price = 100.10;
    // cout<< sizeof(price) << endl;


    /// Type Casting
    // Converting data into one type to another
    // Conversion [Implicit] Casting [Explicit]

    // char grade = 'A';
    // int value = grade;
    // cout << value << endl;  // 65 is the Ski Value of Capital A

    // TC is used to convert big data to small data
    // double price = 100.10;
    // int newPrice = (int)price;
    // cout << newPrice << endl;
    
    
    /// Input in C++

    // int age;
    // cout << "Enter the age :";
    // cin >> age;
    // cout << "Your age is : " << age << endl; 

    // Another Example
    // double price;
    // cout << "Enter the price :";
    // cin >> price;
    // cout << "The price is :" << price << endl;


    /// Operators

    // Arithmetic

    // Sum (Way 01)
    // int a = 5 , b = 10;
    // int sum = a + b;
    // cout << sum << endl; 
    
    // Sum (Way 02)
    // int a = 5 , b = 10;
    // cout << (a+b) << endl;

    // Sum (Way 03)
    // int a = 5 , b = 10;
    // cout << "Sum is = "<< (a+b) << endl;

    // Difference (Way 01)
    // int a = 5 , b = 10;
    // int sub = a - b;
    // cout << sub << endl; 

    // Difference (Way 02)
    // int a = 5, b= 10;
    // cout << (a-b) << endl;

    // Difference (Way 03)
    //int a = 5, b= 10;
    //cout << "difference = " << (a-b) << endl;

    // Product (Way 01)
    // int a = 5 , b = 10;
    // int multi = a * b;
    // cout << multi << endl; 

    // Product (Way 02)
    // int a = 5, b= 10;
    // cout << (a*b) << endl;

    //  Product (Way 03)
    //int a = 5, b= 10;
    //cout << "Product = " << (a*b) << endl;

    // Quotient (Way 01)
    // int a = 5 , b = 10;
    // int div = a / b;
    // cout << div << endl; 

    // Quotient (Way 02)
    // int a = 5, b= 10;
    // cout << (a/b) << endl;

    // Quotient + Modulo (Way 03)
    // int a = 11, b= 5;
    // cout << "Quotient = " << (a/b) << endl;
    // cout << "Modulo = " << (a%b) << endl;

    // Relational 
    // Returns the answer in True/False
    
    // < // Less than
    // a < b
    // Example
    // cout << (2 < 3) << endl; // True --> 1
    // cout << (4 < 3) << endl; // False --> 0 
    

    // <= // Less than or Equal to
    // a <= b
    // cout << (2 <= 3) << endl; // True --> 1
    // cout << (4 <= 3) << endl; // False --> 0 

    // > // Greater than
    // a > b
    // cout << (2 > 3) << endl; // False --> 0
    // cout << (4 > 3) << endl; // True --> 1

    // >= // Greater than or Equal to
    // a >= b
    // cout << (2 >= 3) << endl; // False --> 0 
    // cout << (4 >= 3) << endl; // True --> 1

    // == // Equal to
    // a == b
    // cout << (2 == 3) << endl; // False --> 0 
    // cout << (3 == 3) << endl; // True --> 1

    // != // Not Equal to
    // a != b
    // cout << (2 != 3) << endl; // True --> 1 
    // cout << (3 != 3) << endl; // False --> 0


    /// Logical
    // Returns the answer in True/False

    // or (||) // One True Answer Will Be True
    // cout << ((3 > 1) || (3 < 1)) << endl;
    // cout << ((3 < 1) || (3 < 1)) << endl;

    // and (&&) // // One Fasle Answer Will Make The Answer False
    // cout << ((3 > 1) && (3 > 1)) << endl;
     // cout << ((3 < 1) && (3 < 1)) << endl;

    // not (!) // True - False | False - True
    // cout << !(3 > 1) << endl;
    // cout << !(3 < 1) << endl;
    
    /// Unary Operators
    // Need One Number

    // Increment (++)
    // a++ (Post Increment Operator) // Work --> Update
    // int a = 10;
    // int b = a++;
    // cout << "b = " << b << endl;
    // cout << "a = " << a << endl;

    // ++a ((Pre Increment Operator) ) // Update --> Work
    // int a = 10;
    // int b = ++a;
    // cout << "b = " << b << endl;
    // cout << "a = " << a << endl;


    // Decrement (--)
    // a-- ((Post Decrement Operator) ) // Work --> Update
    // int a = 10;
    // int b = a--;
    // cout << "b = " << b << endl;
    // cout << "a = " << a << endl;

    // --a ((Pre Decrement Operator) ) // Update --> Work 
    // int a = 10;
    // int b = --a;
    // cout << "b = " << b << endl;
    // cout << "a = " << a << endl;


    /// Practice
    // Q1 Sum of 2 Numbers

    // int a, b;
    // cout << "Enter first number :";
    // cin >> a ;
    // cout << "Enter second number :";
    // cin >> b ;
    // int sum = a + b;
    // cout << "Sum is :" << sum << endl;


    /// Homework
    // Make a Calculator performing sum, sub, multi, div and modulo.


    // return 0;
}