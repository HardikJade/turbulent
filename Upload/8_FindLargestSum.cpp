#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        long long maxSubarraySum(int arr[], int n){
            long long result = arr[0];
            long long current = arr[0];
            for(int i = 1 ; i < n; i++){
                current = current + arr[i];
                if(arr[i] > current){current = arr[i];}
                result = max(result, current);
            }
            return result;
        }
};
int main(){
    Solution S;
    int arr[] = {1,2,3,-2,5};
    S.maxSubarraySum(arr,5);
    return 0;
}