#include <iostream>
#include <vector>
using namespace std;

vector <int> prefixSum(vector<int> &v){
    vector <int> ans(v.size());
    int temp = 0;
    for(int i=0; i<v.size(); i++){
        ans[i] = v[i] + temp;
        temp += v[i];
    }
    return ans;
}

int main(){
    vector <int> v = {1,2,3,4,5};
    vector <int> ans = prefixSum(v);
    for(int i : ans){
        cout << i <<" ";
    }
    return 0;
}