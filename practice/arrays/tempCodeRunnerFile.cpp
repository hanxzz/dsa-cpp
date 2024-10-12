#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int d = 3;

    std::vector<int> temp(d);
    for(int i = 0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i = d;i<n;i++){
        arr[i-d] = arr[i];
    }
    int j=0;
    for(int i = n-d;i<n;i++){
        arr[i] = temp[j];
        j++;
    }

    for(int i = n-d;i<n;i++){
        cout<<arr[i];
        
    }
}