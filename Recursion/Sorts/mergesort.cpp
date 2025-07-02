#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid, int high){
    vector<int> temp;
    int i = low;
    int j = mid+1;
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        } 
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=low;k<=high;k++){
        arr[k] = temp[k-low];
    }
}

void printVector(vector<int> arr){
    for(auto i : arr)
        cout<<i<<" ";
    cout<<"\n";
}
void mergeSort(vector<int> &arr, int low, int high){
    if(low >= high){
        return;
    }
    int mid = (low + high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    cout<<"Hello world\n";
    vector<int> arr = {12,21,31,41,25,38,90};
    int low=0, high=arr.size()-1;
    printVector(arr);
    mergeSort(arr,low,high);
    printVector(arr);
    return 0;
}
