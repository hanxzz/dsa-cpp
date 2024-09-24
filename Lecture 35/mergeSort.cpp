#include<iostream>
#include <vector>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    for(int i = 0;i<len1;i++){
        first[i]=arr[s+i];
    }
    for(int i = 0;i<len2;i++){
        second[i] = arr[mid+1+i];
    }

    //merge 2 sorted arrays;
    int index1 = 0;
    int index2 = 0;
    int k = s;

    while(index1<len1 && index2 <len2){
        if(first[index1]<second[index2]){
            arr[k]= first[index1];
            index1++;
        }
        else{
            arr[k]= second[index2];
            index2++;
        }
            k++;
    }
    while(index1<len1){
        arr[k]= first[index1];
        index1++;
        k++;
    }
     while(index2<len2){
        arr[k]= second[index2];
        index2++;
        k++;
    }
}

void mergeSort(int arr[], int s, int e){
    if(s<e){
        int mid = (s+e)/2;
        mergeSort(arr,s, mid);
        mergeSort(arr,mid+1,e);
        merge(arr,s,e);
    }
}


int main(){
    int arr[5] = {2,5,1,6,9};
    int n = 5;
    mergeSort(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<"";
    } cout<<endl;
}