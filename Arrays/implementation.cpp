#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
}
}
int main(){

    //declare
    // int number[15];
    // cout<<"Value at index 3: "<<number[3]<<endl;

    // int second[3] = {5,7,11};
    // cout<<"Value at index 2: "<<second[2]<<endl;

    int third[15] = {2,7};

    // printing the array
    cout<<"Array elements: ";
    printArray(third,15);
    cout<<endl;

    int fifth[10] = {1};
    int n = sizeof(fifth)/sizeof(int);
    cout<<n;
    }
    