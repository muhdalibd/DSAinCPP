/*
    Object Oriented Programming
    Classes & Objects
    Objects are entities in the real world.     => car
    Class is like blueprint of these entities   => car1
    Syntax:
        class class_name {};

    Access Modifiers:
    private     data & methods accessible inside class.
    public      data & methods accessible to everyone.
    protected   data & methods accessible inside class to its derived class.
*/



#include <iostream>
using namespace std;
/*
class Teacher {
private:
    double salary;
public:
    // Properties / Attributes
    string name;
    string dept;
    string subject;

    // Methods / Member Functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    // Setter
    void setSalary(double s){
        salary = s;
    }
    // Getter
    double getSalary(){
        return salary;
    }
};

int main(){ 
    Teacher t1;
    t1.name = "Shradha";
    t1.subject = "C++";
    t1.dept = "CSE";
    // t1.salary = 25000;
    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.dept << endl;
    // cout << t1.salary << endl;
    cout << t1.getSalary() << endl;

    return 0;
}
*/



/*
    Four Pilars of OOPS
    1. Encapsulation
    2. Abstruction
    3. Inheritance
    4. Polymorphism

    Encapsulation
    Encapsulation is wrapping up of data & members functions in a single unit called class.
    Helps Data Hiding.
*/

class Account {
private:
    double balance;
    string password;
public:
    string accountID;
    string username;
};



/*
    Constructor
    Special method invoked automatically at time of object creation. Used for Initialization.
    Same name as class.
    Constructor doesn't have a return type.
    Only called once (automatically), at object creation.
    Memory allocation (object) happens when constructor is called.
    Three Types of Constructors.
    1. Non-parameterized 
    2. Parameterized
    3. Copy Constructor
        this is a special pointer in C++ that points to the current object.
        this->prop is same as *(this).prop
    Constructor Overloading => multiple constructor in the class with diff parameter.
*/

class Teacher {
private:
    double salary;
public:
    //  Constructor --> Always in Public
    Teacher(){ // Non-parameterized
        cout << "Hi, I am constructor.\n";
        dept = "CSE";
    }
    Teacher(string n, string d, string s, double sal){  // parameterized
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    // Teacher(string name, string dept, string subject, double salary){  // copy
    //     this->name = name;
    //     this->dept = dept;
    //     this->subject = subject;
    //     this->salary = salary;
    // }
    string name;
    string dept;
    string subject;

    void changeDept(string newDept) {
        dept = newDept;
    }
    void getInfo(){
        cout << name << endl;
        cout << dept << endl;
        cout << subject << endl;
        cout << salary << endl;
    }
};

int main(){
    Teacher t1 ("Shradha", "CSE", "C++", 25000);
    // t1.name = "Sadia";
    // cout << t1.dept << endl;
    t1.getInfo();
    return 0;
}