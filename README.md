AIM:-
To implement classes and objects in C++ to calculate the volume of a cube using different approaches such as direct initialization, user input, member functions, and access specifiers.

THEORY:-
Class in C++
A class is a user-defined data type that serves as a blueprint for creating objects.
It groups together data members (variables) and member functions (methods) into a single unit.
Syntax for defining a class:
class ClassName {
   // Access specifiers: public, private, protected
   // Data members
   // Member functions
};
Data members hold the state of the object, while member functions define its behavior.
Classes improve modularity and data security by controlling how data is accessed and modified.

Object in C++
An object is an instance of a class. When a class is defined, no memory is allocated until an object is created.
Objects are used to access class members:
ClassName obj;  
obj.memberFunction();

Access Specifiers
Public: Members are accessible from outside the class. Useful for functions that need to interact with other parts of the program.
Private: Members are accessible only within the class. This ensures encapsulation—data hiding to protect variables from unintended modification.
Protected: Members are accessible in the class and its derived classes (not used in this experiment but important in OOP).

Encapsulation and Data Hiding
Encapsulation means bundling data and functions that operate on that data within one unit (class).
Data hiding restricts access to internal object details, ensuring that data can only be changed through controlled member functions.
Example: In Program 4, cube dimensions are private, but the volume() method allows controlled access.

Member Functions
Member functions are defined inside or outside the class to manipulate data members or perform operations.
They are used for:
Input/Output (e.g., inp() in Program 2 for taking user input).
Processing Data (e.g., volume() to calculate the cube’s volume).
Displaying Results (e.g., display() to print the volume).
Member functions make the code reusable and easier to maintain.

Advantages of Using Classes and Objects
Modularity: Code is organized into logical units.
Reusability: Classes can be reused to create multiple objects.
Abstraction: Hides complex implementation details.
Security: Access specifiers ensure that only intended parts of the code can modify data.
Maintainability: Easier to update or debug parts of the program without affecting the entire codebase.


ALGORITHM:-
Program 1 – Direct Initialization and Volume Calculation
Define a class cube with public data members height, width, and length initialized with default values.
Create an object c1 of class cube.
Calculate the volume by multiplying its dimensions.
Print the volume.

Program 2 – User Input Using Member Function
Define a class cube with public data members and member functions inp(), volume(), and display().
inp() takes user input for dimensions.
volume() calculates the volume of the cube.
display() calls volume() and displays the result.
In main(), create an object and call these functions.

Program 3 – Volume Calculation Using Member Function
Define a class cube with initialized public data members.
Define a member function volume() to calculate and return the volume.
Create an object of the class and call the volume() function.
Display the result.

Program 4 – Use of Private Members
Define a class cube with private data members.
Define a public member function volume() to calculate the volume.
Create an object in main() and call volume() to print the result.
Observe encapsulation as data members are not directly accessible.

CONCLUSION:-
Classes group related data and functions, while objects provide instances to work with.
Public and private access specifiers demonstrate encapsulation and data hiding.
Using member functions simplifies code and promotes reusability.
The experiments show different approaches for accessing and processing data through objects, proving the versatility of Object-Oriented Programming in C++.
