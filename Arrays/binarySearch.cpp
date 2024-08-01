#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;

    while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    //go to right
    else if(arr[mid]<key){
        start = mid+1;
    }
    //go to left
    else{
        end = mid-1;
    }
    mid = (start+end)/2;
}
return -1;
}

int main(){
    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};
    
    
    cout <<"Index of 6 in even array is: "<<binarySearch(even,6, 6)<<endl;
    cout <<"Index of 7 in odd array is: "<<binarySearch(odd,5, 7)<<endl;
}