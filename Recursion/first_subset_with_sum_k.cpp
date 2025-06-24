#include<bits/stdc++.h>
using namespace std;

bool generate(int i, int k,int sum,vector<int>& arr,vector<int>& ds) {
    if (i == arr.size()) {
        if(sum == k){
                cout<<"The first subsequence with sum k is : ";
                for(auto i : ds)
                    cout<<" | "<<i<<" | ";
                return true;
        }
        return false;
    }
    
    // Include arr[i]
    sum += arr[i];
    ds.push_back(arr[i]);
    if(generate(i + 1, k,sum,arr,ds) == true)
        return true;
    
    // Exclude arr[i]
    sum -= arr[i];
    ds.pop_back();
    if(generate(i + 1, k,sum, arr,ds) == true)
        return true;
}

int main(){

    vector<int> arr = {2, 3, 1, 4};
    vector<int> ds;
    int k = 6;

    generate(0,k,0,arr,ds);

    return 0;
}