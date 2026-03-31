/*
    🔰  Data Structures
    --------------------
    Data structures are used to store and organize data. An array is an example of a data
        structure, which allows multiple elements to be stored in a single variable.
    C++ includes many other data structures as well, each is used to handle data in
        different ways.
    These are part of the C++ STL, which stands for The Standard Template Library.

    🔰  C++ STL
    ------------
    STL is a library that consist of different data structures and algorithms to
        effectively storeand manipulate data.
    If we say that data structures store data, we can say that algorithms are used to solve
        different problems, often by searching through and manipulating those data structures.
    Using the right data structure and algorithm makes your program run faster,
        especially when working with lots of data.

    🔰  Key Concepts of the STL
    -----------------------------
    The key components of the STL consist of containers, iterators, and algorithms,
        and the relationship between them:
    1. Containers are data structures that provides a way to store data, like vectors, lists, etc.
    2. Iterators are objects used to access elements of a data structure.
    3. Algorithms include functions, like sort() and find(), that perform operations
        on data structures through iterators.
    In Computer Science, data structures and algorithms go hand in hand. A data structure is not
        worth much if you cannot search through it or manipulate it efficiently using algorithms,
        and algorithms are not worth much without a data structure to work on.

*/

/*
    🟧  C++ Vector
    A vector in C++ is like a resizable array.
    Both vectors and arrays are data structures used to store multiple elements of the same data type.
    The difference between an array and a vector, is that the size of an array cannot
    be modified (you cannot add or remove elements from an array). A vector however,
    can grow or shrink in size as needed.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    //  🟧  Create a Vector
    vector <int> v1;             //  empty
    vector <int> v2(5);          //  {0, 0, 0, 0, 0}
    vector <int> v3(5, 8);       //  {8, 8, 8, 8, 8}
    vector <int> v4 = {1, 2, 3, 4, 5};
    vector <int> v5 {1, 2, 3, 4, 5};


    //  🟧  Access a Vector
    //      => [], at(), front(), back()
    vector <int> arr = {4, 6, 9, 7, 3};
    // cout << arr[2] << endl;         //  9
    // cout << arr.at(3) << endl;      //  7
    // cout << arr.front() << endl;    //  4
    // cout << arr.back() << endl;     //  3


    //  🟧  Change a Vector Element
    vector <int> fun = {4, 9, 8, 3, 7, 5};
    // fun[2] = 50;
    // fun.at(3) = 100;
    // for(auto e : fun){
    //     cout << e << " ";
    // }
    

    //  🟧  Add Vector Elements
    vector <int> vec;
    // // vec[0] = 8;         // ERROR: vec is empty, index 0 doesn't exist
    // vec.push_back(5);
    // vec.push_back(8);      // O(1) time complexicity
    // vec.push_back(3);      // Inserts element at the end of the vector efficiently

    vector <int> nums = {1, 5, 9, 3, 7, 6};
    // nums.resize(7);
    // nums[6] = 100;               //  Avoid to use this in vector
    // nums.push_back(40);
    // nums.insert(nums.end()-2, 500);     // insert(position, value) : Inserts element at any position
    // nums.insert(nums.begin()+3, 100);   // O(n) time complexicity


    //  🟧  Remove Vector Elements
    vector <int> girls = {1, 8, 6, 3, 4, 9};
    // girls.pop_back();           //  removes an element from the end of the vector
    // girls.erase(girls.begin()+2);       //  O(n) time complexicity
    // girls.clear();


    //  🟧  Vector Size & Capacity
    vector <int> boys = {1, 4, 3, 6, 7};
    // cout << boys.size() << endl;        //  5
    // cout << boys.capacity() << endl;    //  5
    // boys.push_back(8);
    // cout << boys.size() << endl;        //  6
    // cout << boys.capacity() << endl;    //  10
    // boys.push_back(8);
    // boys.push_back(8);
    // boys.push_back(8);
    // boys.push_back(8);
    // cout << boys.size() << endl;        //  10
    // cout << boys.capacity() << endl;    //  10
    // boys.push_back(6);
    // cout << boys.size() << endl;        //  11
    // cout << boys.capacity() << endl;    //  20



    //  🟧  Check if a Vector is Empty
    vector <int> num;
    // cout << num.empty() << endl;


    //  🟧  Traverse Element of Vector      //  O(n)
    // for(int i=0; i<arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    for(auto e : v1){    //  for each
        cout << e << " ";
    }


    //  🟧  Loop Through a Vector
    int size;
    cout << "Enter array size: ";
    cin >> size;

    vector <int> v;
    // v.resize(size);              //  Method 1
    // vector <int> v(size);        //  Method 2
    for(int i=0; i<size; i++){
        // cin >> v[i];             //  for 1 & 2
        int value;
        cin >> value;
        v.push_back(value);         //  Method 3 => in loop [size = 5] not [v.size() = 0]
    }
    for(auto e : v){
        cout << e << " ";
    }
    return 0;
}