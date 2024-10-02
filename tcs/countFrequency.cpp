#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

void countFreq(int arr[],int n){
    set<int> unique;
    for(int i = 0;i<n;i++){
        unique.insert(arr[i]);
    }
    int count;
    for(auto it :unique){
        count=0;
        for(int i = 0;i<n;i++){
            if(arr[i]==it){
                count++;
            }    
        }
        cout<< it << " occurs " << count<<endl;
    }
}



int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}