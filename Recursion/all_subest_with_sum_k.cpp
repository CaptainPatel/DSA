#include<bits/stdc++.h>
using namespace std;

void generate(int i, int k,int sum,vector<int>& ds, vector<int>& arr, vector<vector<int>>& res) {
    if (i == arr.size()) {
        if(sum == k){
                res.push_back(ds);
        }
        return;
    }
    
    // Include arr[i]
    ds.push_back(arr[i]);
    sum += arr[i];
    generate(i + 1, k,sum,ds, arr, res);
    
    // Exclude arr[i]
    ds.pop_back();
    sum -= arr[i];
    generate(i + 1, k,sum,ds, arr, res);
}

int main(){

    vector<int> arr = {1,2,3,2};
    vector<int> ds;
    vector<vector<int>> res;

    generate(0,4,0,ds,arr,res);

    for(auto i : res){
        for(auto k : i){
            cout<<k<<" ";
        }
        cout<<"\n";
    }

    return 0;
}