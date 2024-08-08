#include<iostream>
using namespace std;
void selectionSort(int arr[5], int n){
    for(int i = 0;i<n;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
            swap(arr[i],arr[j]);
        }  
    }
}
int main(){
    int arr[5] = {100,23,43,54,32};
    selectionSort(arr, 5);
    for(int i = 0;i<5;i++){
        cout<< arr[i]<<" ";
    }
}