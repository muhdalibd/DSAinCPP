/*
    Lecture 1 - Neso Academy
    Procedural vs. Object-Oriented Programming

    Procedural Programming 
    The focus is in creating procedures, means functions.
    Data and functions are separate entities, and programmer has to
    combine them to produre the desired result.
    Example: push(man, door)

    Object Oriented Programming
    The focus is on creating user-defined data types containing
    both properties and behaviour.
    An object is an instance of the user defined data type.
    Example: man.push(door)
*/

/*
#include <iostream>
#include <string>
using namespace std;

enum Vehicle {car, bike, truck};

string giveName(Vehicle type){
    switch (type){
        case car:
            return "car";
        case bike:
            return "bike";
        case truck:
            return "truck";
        default:
            return "";
    }
}

int main(){
    Vehicle type{truck};
    cout << "I have a " << giveName(type);
    return 0;
}
*/


/*
#include <iostream>
#include <string>
using namespace std;

class Vehicle{
public:
    string type;

    Vehicle(string t){
        type = t;
    }
    string giveName(){
        return type;
    }
};

int main(){
    Vehicle myVehicle("truck");
    string type = myVehicle.giveName();
    cout << "I have a " << type;
    return 0;
}
*/