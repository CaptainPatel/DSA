#include<bits/stdc++.h>
using namespace std;

int findPartition(vector<int> &arr, int low, int high){
    int i = low, j=high;
    int pivot = low;
    while(i<j){
        while( i<=high && arr[i] <= arr[pivot] ) 
            i++;
        while( j>=low && arr[j] > arr[pivot] )
            j--;
        if(i < j)
            swap(arr[i],arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high){
    if(low<high){
        int partition = findPartition(arr,low,high);
        quickSort(arr,low,partition-1);
        quickSort(arr,partition+1,high);
    }
}

void printVector(vector<int> arr){
    for(auto i : arr)
        cout<<i<<" ";
    cout<<"\n";
}

int main(){
    vector<int>arr = {1,5,2,6,0,1,6,4};
    int low=0,high=arr.size()-1;
    printVector(arr);
    quickSort(arr,low,high);
    printVector(arr);
    return 0;
}