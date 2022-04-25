#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void moveOneSide(vector<int> v){
        int start = 0;
        int end = v.size() - 1;
        while(start < end){
            if(v[start] > 0){
                swap(v[start], v[end]);
                end--;
            }else{start++;}
        }
        for(int i : v){cout<<i<<"  ";}
    }
};
int main(){
    // vector<int> v = {-12, 11, -13, -5, 6, -7, 5, -3, -6}; 
    vector<int> v = {-1, 2, -3, 4, 5, 6, -7, 8, 9}; 
    Solution S;
    S.moveOneSide(v);
    return 0;
}