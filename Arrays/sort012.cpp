#include<iostream>
using namespace std;
void sort012(int arr[], int size){
    int zero = 0;
    int one = 0;
    int two = 0;
    for(int i = 0;i<size;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
    int i=0;
    while(i<zero){
        arr[i]=0;
        i++;
    }
    while(i<zero+one){
        arr[i]=1;
        i++;
    }
    while(i<size){
        arr[i]=2;
        i++;
    }
}

int main(){
    int arr[6]={0,1,0,2,0,1};
    sort012(arr,6);
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}