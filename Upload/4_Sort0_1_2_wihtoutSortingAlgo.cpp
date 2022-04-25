#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
void printVector(vector<int> v){for(int i : v){cout<<i<<"  ";}}
public:
    void sort012(int a[], int size){
        int first = 0;
        int last = size - 1;
        int mid = 0;
        while(mid <= last){
            int number = a[mid];
            if(number == 0){
                swap(a[first],a[mid]);
                 first++;
                 mid++;
            }
            else if(number == 1){mid+=1;}
            else if(number == 2){
                swap(a[mid],a[last]);
                last = last-1;
            }
        }
    

        for(int i = 0 ; i < size ; i++){cout<<a[i]<<"  ";}
    }
};
int main(){
    Solution S;
    int v[] = {0,1,0};
    S.sort012(v,3);
    return 0;
}