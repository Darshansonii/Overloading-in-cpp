# Overloading-in-cpp

Aim

To understand and implement different types of overloading in C++ including function overloading, constructor overloading, and operator overloading using simple C++ programs.

Theory

Overloading in C++ allows the same function or operator to behave differently based on the context. It enhances the polymorphism feature of object-oriented programming by allowing multiple definitions for the same name with different parameters or behavior.

Function Overloading

Allows multiple functions with the same name but different parameter types or numbers.

The correct version is chosen at compile time based on the arguments passed.

Example:
int add(int a, int b);
float add(float a, float b);

Constructor Overloading

A class can have multiple constructors with different parameter lists.

Used to initialize objects in various ways.

Example:
class Sample {
public:
 Sample(); // Default constructor
 Sample(int a); // Parameterized constructor
};

Operator Overloading

Allows redefining how operators work for user-defined types (classes/objects).

Commonly overloaded operators include +, -, ==, <<, and >>.

Example:
class Complex {
public:
 Complex operator + (Complex obj);
};

Operator overloading makes user-defined types behave like primitive types, improving readability and usability.

Algorithms

Add Overloading.cpp

Uses function overloading to add integers, floats, or other data types.

Demonstrates compile-time polymorphism with multiple add() functions.

Book Operator Overloading.cpp

Overloads assignment or stream insertion (<<) operators for a Book class.

Used to simplify printing or copying of Book object data.

Constructor Overloading.cpp

Implements multiple constructors in a class with different parameters.

Demonstrates how constructors can be tailored for different initialization needs.

Function Overloading.cpp

Shows multiple versions of a function with the same name but different argument types.

Demonstrates the concept of compile-time polymorphism.

Operator Overloading.cpp

Overloads arithmetic or comparison operators for a class.

Helps objects interact using standard operators like + or ==.

Sum Overloading.cpp

Adds two objects of a class using an overloaded + operator or a function.

Demonstrates how user-defined types can mimic built-in behavior.

Conclusion

These programs demonstrate the use of overloading in C++ to improve code flexibility and readability. Function, constructor, and operator overloading are core features of C++ that support polymorphism and object-oriented design. Understanding overloading helps in writing cleaner, more intuitive, and reusable code.
