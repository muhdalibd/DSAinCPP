/*
    STL = Standard Template Library
    STL has four parts => (Containers, Iterators, Algorithms, Functors)
*/

/*
    Vector in C++ STL
    A vector represents a dynamic sized array in the Standard Template Library(STL)
    that automatically grows when elements are added beyond current capacity
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec;
    vec.push_back(1);
    vec.push_back(2);
    cout << vec.size() <<"\n";
    cout << vec.capacity() <<"\n";
    return 0;
}