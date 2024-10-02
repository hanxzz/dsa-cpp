#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getElements(int arr[],int n){
    vector<int> temp;
    for(int i = 0;i<n;i++){
        temp.push_back(arr[i]);
    }
    sort(temp.begin(),temp.end());
    int max = temp[n-1];
    int secondLargest = INT_MIN;
    for(int i = n-2;i>=0;i++){
        if(temp[i]!=max){
            secondLargest = temp[i];
            break;
        }
    }
    cout<< secondLargest;
}


int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}
