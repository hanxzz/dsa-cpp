#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n, int key){
    int s= 0;
    int e = n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while (s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}
int lastOccurence(int arr[],int n, int key){
    int s= 0;
    int e = n-1;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while (s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}
int main(){
    int arr[6] = {1,2,2,2,3,3};
    cout<<firstOccurence(arr,6,2)<<endl;
    cout<<lastOccurence(arr,6,2);
}