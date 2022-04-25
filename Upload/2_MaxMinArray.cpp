#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
void printVector(vector<int> v){for(int i : v){cout<<i<<"  ";}}
public:
    void FindMaxMinFromArray(vector<int> v){
        int max = INT32_MIN;
        int min = INT32_MAX;
        for(int i = 0 ; i < v.size() ; i++){
            int target = v[i];
            if(target > max){max = target;}
            if(target < min){min = target;}    
        }
        cout<<max<<"  "<<min<<endl;
    }
};
int main(){
    Solution S;
    vector<int> v = {1000,10,20,30,40,50};
    S.FindMaxMinFromArray(v);
    return 0;
}