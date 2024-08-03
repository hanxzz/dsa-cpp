#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] <key){ // go to right
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] <key){ // go to right
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int totalOccurences(int arr[],int n, int key){
    int first = firstOcc(arr,n,key);
    int last = lastOcc(arr,n,key);
    return( last - first+1);
}
int main(){
    int even[7] = {1,2,3,3,3,3,5};
    cout<<"Total number of occurences: "<<totalOccurences(even,7,3);
}