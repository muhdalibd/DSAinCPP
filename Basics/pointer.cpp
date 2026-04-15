#include <iostream>
using namespace std;

void printNumber(int *numPoint){
    cout << *numPoint << endl;
}

void printLetter(char *chPoint){
    cout << *chPoint << endl;
}

void printPointer(void *ptr, char type){ 
    switch(type){
        case 'i': 
            cout << *((int*)ptr) << endl;
            break;
        case 'c': 
            cout << *((char*)ptr) << endl;
            break;
    }
}

int getMin(int numbers[], int size){
    int min = numbers[0];
    for(int i=1; i<size; i++){
        if(numbers[i] < min){
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[], int size){
    int max = numbers[0];
    for(int i=1; i<size; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}

void getMinMax(int numbers[], int size, int *min, int *max){
    for(int i=1; i<size; i++){
        if(numbers[i] < *min){
            *min = numbers[i];
        }
        if(numbers[i] > *max){
            *max = numbers[i];
        }
    }
}

int main(){
    //  Introduction to Pointer
    // int n = 5;
    // cout << &n << endl;
    // int *ptr = &n;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // *ptr = 10;
    // cout << *ptr << endl;
    // cout << n << endl;

    // float x = 6;
    // float *ptrX = &x;

    // int *ptr2;   //  ERROR
    // *ptr2 = 7;



    //  void Pointer  -->  AVOID TO USE
    // int num = 5;
    // // printNumber(&num);
    // char ch = 'A';
    // // printLetter(&ch);
    // printPointer(&num, 'i');
    // printPointer(&ch, 'c');




    //  Pointer & Array
    // int luckyNumbers[5] = {1,2,3,4,5};
    // cout << luckyNumbers << endl;
    // cout << &luckyNumbers[0] << endl;
    // cout << luckyNumbers[2] << endl;
    // cout << *(luckyNumbers+2) << endl;

    // int luckyNumbers[5];
    // for(int i=0; i<5; i++){
    //     cin >> luckyNumbers[i];
    // }
    // for(int i=0; i<5; i++){  //  if i<7
    //     cout << *(luckyNumbers+i) <<" ";
    // }



    //  Function using Pointer
    int numbers[5] = {6,3,5,-1,25};
    // cout << getMin(numbers, 5) << endl;
    // cout << getMax(numbers, 5) << endl;
    int min = numbers[0];
    int max = numbers[0];
    getMinMax(numbers, 5, &min, &max);
    cout << min << " & " << max << endl;

    // system("pause>0");
    return 0;
}