#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    void printVector(vector<int> v){for(int i : v){cout<<i<<"  ";}}
    public:
    vector<int> ReverseArray(vector<int> v){
        //Using STL
        reverse(v.begin(),v.end());
        //Using Code
        int start = 0;
        int end = v.size() - 1;
        while(start < end){
            swap(v[start] , v[end]);
            start++;
            end--;
        }
        printVector(v);
        return v;
    }
};
int main(){
    Solution S;
    vector<int> v = {10,20,30,40,50};
    S.ReverseArray(v);
    return 0;
}