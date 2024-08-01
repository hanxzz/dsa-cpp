#include<iostream>
using namespace std;
void dutchFlagSort(int arr[],int size){
    int low = 0;
    int mid = 0;
    int high = size-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

void printArray(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<< arr[i] <<" ";
    }
}
int main(){
    int arr[9] = {0,1,2,0,0,1,2,2,0};
    dutchFlagSort(arr, 9);
    printArray(arr,9);
}