/*
    Lecture 3 - Neso Academy
    Defining Member Fuctions

    Outside the Class Definition
    Defined using the scope resolution operator.
    Inside the Class Definition
    Functions defined inside the class are treated as inline function.
*/

#include <iostream>
using namespace std;

class Student {
    private:
        int rollno;         //  Memory is allocated for
        float marks;        //  variable of object s1
    public:
        void putData(int a, float b);
        // void display();
        void display(){         // Inside the Class Definition
            cout << rollno << endl;
            cout << marks << endl;
        }
};

void Student :: putData(int a, float b){
    rollno = a;
    marks = b;
}


// void Student :: display(){       // Outside the Class Definition
//     cout << rollno << endl;
//     cout << marks << endl;
// }

int main(){
    Student s1;
    s1.putData(101, 75);
    s1.display();
    return 0;
}