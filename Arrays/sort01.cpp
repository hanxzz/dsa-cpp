#include<iostream>
using namespace std;
void sort(int arr[],int size){
    int left = 0;
    int right = size-1;
    while(left<right){
        if(arr[left]==0){
            left++;
        }
    else if(arr[right]==1){
        right--;
    }
    else{
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
}

int main(){
    int arr[6] = {0,1,0,1,1,0};
    sort(arr,6);
    for(int i = 0;i<6;i++){
        cout << arr[i]<<" ";
    }
}