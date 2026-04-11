/*
    Lecture 2 - Neso Academy
    Classes and Objects

    Classes
    A user defined data type that allows combining data and functions into a single unit.
    Helps in hiding data and functions from the outside world (outside class), allowing 
    controlled access and preventing unnecessary or accidental changes.
    Syntax:
        class class_name {
        private:            //  Only Accessible within the class
            // Data Members
            // Member Functions
        public:             //  Accessible outside the class
            // Data Members
            // Member Functions
        };
    By default, all members of a class are private.

    Creating Objects
    Objects --> Instance of a class. Class --> Blueprint of Object
    It's like a variable of a class type.
    Syntax:
        class_name object_name;

    Accessing Class Members
    Syntax:
        object_name.function_name(arguments);
*/

#include <iostream>
using namespace std;

class Student {
    private:
        int rollno;         //  Memory is allocated for
        float marks;        //  variable of object s1
    public:
        void putData(int a, float b);
        void display();
};


int main(){
    Student s1;
    s1.putData(101, 75);
    s1.display();
    return 0;
}