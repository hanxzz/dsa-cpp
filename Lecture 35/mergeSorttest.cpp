#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    
    int len1 = mid-s +1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values from original array to left and right new arrays
    for(int i = 0;i<len1;i++){
        first[i] = arr[s+i];
    }
    for(int i = 0;i<len2;i++){
        second[i] = arr[mid+1+i];
    }

    //merge 2 sorted arrays
    int i = 0;
    int j = 0;
    int k = s;

    while(i<len1&&j<len2){
        if(first[i]<second[j]){
            arr[k] = first[i];
            i++;
        }
        else{
            arr[k]=second[j];
            j++;
        }
        k++;
    }
    while(i<len1){
        arr[k] = first[i];
        i++;
        k++;
    }
    while(j<len2){
        arr[k] = second[j];
        j++;
        k++;
    }

}



void mergeSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);

}

int main(){
    int arr[5]={2,5,1,6,9};
    int n = 5;
    
    mergeSort(arr,0,n-1);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<"";
    } cout<<endl;
    
    return 0;
}