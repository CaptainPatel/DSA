#include<bits/stdc++.h>
using namespace std;

int countWithSumK(vector<int>arr,int i,int k, int sum, vector<vector<int>>&dp){
    if(i == arr.size()){
        if(sum == k)
            return 1;
        return 0;
    }
    if(dp[i][sum] != -1)
        return dp[i][sum]; 

    int left = countWithSumK(arr,i+1,k,sum+arr[i],dp);
    int right = countWithSumK(arr,i+1,k,sum,dp);

    return dp[i][sum] = right+left;
}

int main(){
    vector<int>arr = {1,2,1};
    int sum = 0;
    int k = 2;
    int i = 0;
    int n = arr.size();
    vector<vector<int>>dp(n, vector<int>(k+1, -1));

    int a = countWithSumK(arr,i,k,sum,dp);
    cout<<a<<" ";
    return 0;
}