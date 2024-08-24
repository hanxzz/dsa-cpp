#include<iostream>
#include <vector>
using namespace std;

void rowWiseSum(int arr[][3], int row, int col){
    for(int row = 0;row<3;row++){
        int sum = 0;
        for(int col = 0;col<3;col++){
            sum += arr[row][col];
        }
        cout<<sum << " ";
    }
    cout<<endl;
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

rowWiseSum(arr,3,4);
}