#include<iostream>
using namespace std;

int getMax(int arr[], int n){
    int maxi = INT_MIN; //let max value be the minimum value rn
    for(int i = 0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}
int getMin(int arr[], int n){
    int mini = INT_MAX; //let min value be the maximum value rn
    for(int i = 0;i<n;i++){
        mini = min(mini,arr[i]);
        // if(num[i]<min){
        //  min = num[i]}
        // }
    }
    return mini;
}
int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i = 0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum value in array is "<< getMax(num, size)<<endl;
    cout<<"Minimum value in array is "<< getMin(num, size)<<endl;
    
}