#include<iostream>
using namespace std;


int arrayMulti(int arr[], int n){
    int product = 1;
    for(int i = 0;i<n;i++){
        product = product * arr[i];
    }
    return product;
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<arrayMulti(arr,n);
}

