#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int lastDig= 0;
    int revnum;

    while(n>0){
        lastDig = n%10;
        n = n/10;
        revnum = (revnum*10)+lastDig;
    }
    cout<<revnum;
}