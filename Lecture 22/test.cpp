#include<iostream>
#include <vector>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for(int i = 0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){

    char arr[20];
    cin>>arr;
    cout<<"Length of name is "<<getLength(arr);
    int n = getLength(arr);
    reverse(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
}