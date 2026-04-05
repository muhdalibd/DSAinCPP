/*
    • Object Oriented Programming in C++
    OOP stands for Object-Oriented Programming.
    Object-oriented programming is about creating "objects",
    which can hold data and functions that work on that data.

    • Advantages of OOP
    OOP provides a clear structure to programs
    Makes code easier to maintain, reuse, and debug
    Helps keep your code DRY (Don't Repeat Yourself)
    Makes it possible to create full reusable applications with less code and shorter development time.

    • Procedural vs Object-Oriented Programming
    Procedural programming is about writing functions that operate on data.
    Object-oriented programming (OOP) is about creating objects that contain both the data and the functions.
    In procedural programming, the code is organized around functions.
    In object-oriented programming, the code is organized around objects.

    • C++ Classes/Objects
    A class is a user-defined data type that we can use in our program,
    and it works as an object constructor, or a "blueprint" for creating objects.
*/

#include <iostream>
using namespace std;

//   • Create a Class
// class Student {  //  The Class
// public:   // Access specifier
//     string name;   // Attribute => Variables declared within a class, called Attributes.
//     int age;
// };

// int main(){
//     //  • Create an Object
//     Student s1; // Create an object of Student Class
//     //  • Access attributes and set values
//     s1.name = "Mohammad Ali Hasan";
//     s1.age = 21;
//     //  • Print attribute values
//     cout << s1.name << "\n" << s1.age << endl;
//     return 0;
// }



/*
    • C++ Class Methods
    Methods are functions that belongs to the class.
    There are two ways to define functions that belongs to a class:
    1. Inside class definition
    2. Outside class definition
*/


// class MyClass {
//     public:
//     string name;
//     int age;
//     // • Method/function defined inside the class
//     // void display(){
//     //     cout << name << endl;
//     //     cout << "Age = " << age;
//     // }
//     // • Method/function declaration
//     // void display();
// };

// // • Method/function definition outside the class
// void MyClass::display(){
//     cout << name << endl;
//     cout << "Age = " << age;
// }

// int main(){
//     MyClass myObj;
//     myObj.name = "Mohammad Ali Hasan";
//     myObj.age = 21;
//     // myObj.display();    //   Call the method
//     return 0;
// }



/*
    C++ Constructors:
    A constructor is a special method that is automatically called when an object of a class is created.
    To create a constructor, use the same name as the class, followed by parentheses ().
    Constructor Rules:
    The constructor has the same name as the class.
    It has no return type (not even void).
    It is usually declared public.
    It is automatically called when an object is created.
*/


// class MyClass {
//     public:
//     MyClass(){  //  Constructor
//         cout << "Hey, I am Constructor!";
//     }
// };


//  • Constructor with Parameters
// class Car {
//     public:
//     string brand;
//     string model;
//     int year;

//     Car(string x, string y, int z){
//         brand = x;
//         model = y;
//         year = z;
//     }

//     // void display();
// };

// void Car::display(){
//     cout << brand << " ";
//     cout << model << " ";
//     cout << year << endl;
// }

// int main(){
//     // MyClass myObj;

//     Car car1("BMW", "X5", 1999);
//     Car car2("Ford", "Mustang", 1969);

//     cout << car1.brand << " " << car1.model << " " << car1.year << endl;
//     cout << car2.brand << " " << car2.model << " " << car2.year << endl;

//     // car1.display();
//     // car2.display();
//     return 0;
// }



/*
    • Constructor Overloading
    In C++, you can have more than one constructor in the same class.
    This is called constructor overloading.
    Each constructor must have a different number or type of parameters,
    so the compiler knows which one to use when you create an object.
    • Why Use Constructor Overloading?
    To give flexibility when creating objects
    To set default or custom values     (!)
    To reduce repetitive code
*/


// class Car {
// public:
//     string brand;
//     string model;
//     int year;
//     Car(){
//         brand = "Unknown";
//         model = "Unknown";
//         year = 1980;
//     }
//     Car(string x, string y, int z);
//     void display();
// };

// Car::Car(string x, string y, int z){
//     brand = x;
//     model = y;
//     year = z;
// }

// void Car::display(){
//     cout << brand << " ";
//     cout << model << " ";
//     cout << year << endl;
// }

// int main(){
//     Car car1;
//     Car car2("BMW", "X5", 1998);
//     Car car3("Ford", "Mustang", 1999);

//     car1.display();
//     car2.display();
//     car3.display();
//     return 0;
// }