#include<iostream>
#include<algorithm>
using namespace std;


int partition(int arr[], int s, int e){

    int pivot = arr[s];
    int count = 0;
    for(int i = s+1;i<e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    //placing pivot at right position
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);

    //left and right

    int i = s;
    int j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}


void quickSort(int arr[], int s, int e){
    while(s>=e){
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}


int main(){

    int arr[] = {2,4,1,6,9};
    int n = 5;

    quickSort(arr, 0, n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}