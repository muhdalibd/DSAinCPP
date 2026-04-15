#include <iostream>

int main() {
    int size;
    std::cin >> size;

    float arr[size];
    for(int i=0; i<size; i++){
        std::cin >> arr[i];
    }
    for(auto val : arr){
        std::cout << val << " ";
    }
    return 0;
}