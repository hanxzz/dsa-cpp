#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }
    //processing
    if(arr[0]>arr[1]){
        return false;
    }
    //recursive call
    else{
        bool remaining = isSorted(arr+1,size-1);
        return remaining;
    }

}
int main(){
    int arr[] = {2,4,6,8,9};
    int size = 5;
    cout<<isSorted(arr,size);
}