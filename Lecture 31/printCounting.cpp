#include<iostream>
using namespace std;

int printCounting(int n){
    //base case
    if(n==0){
        return ;
    }
    cout<<n;
    printCounting(n-1);
    return n;
}

int main(){
    int n;
    cin>>n;
    printCounting(5);
}