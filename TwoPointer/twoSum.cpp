#include <iostream>
#include <vector>
using namespace std;

vector <int> twoSum(vector <int> &v, int k){
    int i=0, j=v.size();
    while(i<j){
        if(v[i]+v[j]==k){
            return {i+1,j+1};
        }
        else if(v[i]+v[j]>k){
            j--;
        } else{
            i++;
        }
    }
    return {-1,-1};
}

int main(){
    vector <int> v = {2,7,11,15};
    int target = 9;
    vector <int> ans = twoSum(v, target);

    for(auto i : ans){
        cout << i <<" ";
    }
    return 0;
}