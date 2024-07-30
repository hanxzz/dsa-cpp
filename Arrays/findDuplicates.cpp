#include<iostream>
using namespace std;
int findDuplicates(int arr[], int size){
for(int i=0;i<size;i++){
    int ok = 0;
     for(int j = i+1;j<size;j++){
        if(arr[i]==arr[j]){
            ok = 1;
        }
     }
     if(ok == 1){
        return arr[i];
     }
}
return -1;
}
int main(){
    int arr[6]={1,2,3,4,2,5};
    cout<<findDuplicates(arr, 6);
}
//we have another XOR approach (codeninja)