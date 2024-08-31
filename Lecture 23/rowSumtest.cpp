#include<iostream>
#include <vector>
using namespace std;

int largestRowSum(int arr[][3],int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row = 0;row<3;row++){
        int sum = 0;
        for(int col = 0;col<3;col++){
            sum = sum + arr[row][col];
        }
        if(maxi<sum){
            maxi = sum;
            rowIndex = row;
        }
    }
    return rowIndex;
}

int main(){
    int arr[3][3];
    cout << "Enter the elements:"<< endl;
    for(int i = 0;i<3;i++){ //row wise
        for(int j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i = 0;i<3;i++){ //row wise
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
int  ansIndex = largestRowSum(arr,3,3);
cout <<ansIndex;
}