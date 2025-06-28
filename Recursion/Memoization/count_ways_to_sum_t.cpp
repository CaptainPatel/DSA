#include<bits/stdc++.h>
using namespace std;

int count_sum(int i, vector<int>arr, int sum ,int t, vector<vector<int>>dp){
    if(i == arr.size()){
        return sum==t?1:0;
    }
    if(dp[i][sum] == -1){
        return dp[i][sum];
    }

    int left = count_sum(i, arr, sum+arr[i], t, dp);
    int right = count_sum(i, arr, sum, t, dp);

    return dp[i][sum] = left+right;
}

int main(){
    int t  = 4; 
    vector<int>arr = {2,2,2};
    int n = arr.size();
    int i = 0, sum = 0;
    vector<vector<int>>dp(n,vector<int>(t+1,-1));
    cout<<count_sum(i, arr, sum, t, dp);

    return 0;
}