#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
void printVector(vector<int> v){for(int i : v){cout<<i<<"  ";}}
public:
    int kthSmallestElement(int arr[],int l,int r,int k){
        sort(arr,arr + r + 1);
        cout<<arr[k-1];
        return arr[k-1];
    }
};
int main(){
    Solution S;
    vector<int> v = {};
    int arr[] = {10,20,3,0,50};
    S.kthSmallestElement(arr,0,4,3);
    return 0;
}