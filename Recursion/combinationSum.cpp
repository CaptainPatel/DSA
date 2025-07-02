#include<bits/stdc++.h>
using namespace std;

// the goal is to find all the possible sequences where the sum 
// can be equal to target -> t.
// catch -> 1 element can be used multiple time

void combinationSum(int i, int t, vector<int> &arr, vector<int> &ds, vector<vector<int>>&ans){
    if(i >= arr.size()){
        if(t == 0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[i] <= t){
        ds.push_back(arr[i]);
        combinationSum(i,t-arr[i],arr,ds,ans);
        ds.pop_back();
    }
    return combinationSum(i+1,t,arr,ds,ans);
}

void printVector(const vector<int>& arr){
    for(auto i : arr)
        cout<<i<<" ";
    cout<<"\n";
}
void printMatrix(const vector<vector<int>>& arr){
    for(const auto& i : arr){
        for(auto j : i)
            cout<<j<<" ";
        cout<<"\n";
    }
    cout<<"\nEnd of Matrix!\n";
}

int main(){
    vector<int>arr = {3,1,5,9,12,7};
    sort(arr.begin(), arr.end()); // Optional: sort for consistency
    vector<int>ds;
    vector<vector<int>>ans;
    int i=0,t=10;
    printVector(arr);
    combinationSum(i,t,arr,ds,ans);
    printMatrix(ans);
    return 0;
}