#include <iostream>
#include <vector>
using namespace std;

int main(){

    // 🔶 Creating a vector in CPP
    vector <int> v;               //  Empty vector
    vector<int> v1(5, 10);        // {10, 10, 10, 10, 10}
    vector<int> v2(3);            // {0, 0, 0} (default-initialized)

    // 🔶 Using initializer list (C++11)
    vector<int> v3 = {1, 2, 3, 4, 5};
    vector<int> v4 {1, 2, 3, 4, 5};

    // 🔶 From another container or array
    int arr1[] = {1, 2, 3, 4, 5};
    vector<int> v5(arr1, arr1 + 5);

    // 🔶 From another vector's range
    vector<int> x = {1, 2, 3, 4, 5};
    vector<int> v6(x.begin() + 1, x.end() - 1);  // {2, 3, 4}

    // 🔶 Copy from another vector
    vector<int> y = {1, 2, 3, 4, 5};
    vector<int> v7(y);      // Deep copy
    vector<int> v8 = y;     // Deep copy

    // 🔶 Move element to a vector
    vector<int> z = {1, 2, 3, 4, 5};
    vector<int> v9(move(z));  // Transfer ownership & z is now empty

    // 🔶 Using assign() Method
    vector<int> v10;
    // Fill assign
    v10.assign(5, 100);              // {100, 100, 100, 100, 100}
    // Range assign
    int arr2[] = {1, 2, 3};
    v10.assign(arr2, arr2 + 3);        // {1, 2, 3}
    // Initializer list assign
    v10.assign({10, 20, 30});        // {10, 20, 30}

    // 🔶 Using push_back() and emplace_back()
    vector<int> v11;
    v11.push_back(1);    // Add element at end
    v11.push_back(2);
    v11.emplace_back(3); // More efficient for complex types

    // 🔶 Using insert() Method
    vector<int> v12 = {1, 2, 3};
    // Insert single element
    v12.insert(v12.begin() + 1, 99);     // {1, 99, 2, 3}
    // Insert multiple copies
    v12.insert(v12.begin(), 2, 88);      // {88, 88, 1, 99, 2, 3}
    // Insert from range
    int arr[] = {5, 6, 7};
    v12.insert(v12.end(), arr, arr + 3); // Append array
    // Insert initializer list
    v12.insert(v12.begin(), {11, 22});   // {11, 22, 88, 88, 1, ...}

    

    for(auto i : v12){
        cout << i <<" ";
    }
    // cout << "\n" << z.empty() << endl;
    return 0;
}