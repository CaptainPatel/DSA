#include<bits/stdc++.h>
using namespace std;

int countWithSumK(vector<int>arr,int i,int k, int sum){
    if(i == arr.size()){
        return sum == k ? 1 : 0;
    }

    int left = countWithSumK(arr,i+1,k,sum+arr[i]);
    int right = countWithSumK(arr,i+1,k,sum);

    return right+left;
}

int main(){
    vector<int>arr = {1,2,1};
    int sum = 0;
    int k = 2;
    int i = 0;

    int a = countWithSumK(arr,i,k,sum);
    cout<<a<<" ";
    return 0;
}