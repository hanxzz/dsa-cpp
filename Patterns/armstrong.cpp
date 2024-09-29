#include<iostream>
using namespace std;
int main(){
    int digit;
    int newnum = 0;
    int n;
    cin>>n;
    int dup=n;
    while(n>0){
        digit = n%10;
        n = n/10;
        newnum = newnum+ digit*digit*digit;
    }
    cout<<newnum;
    if(newnum==dup){
        cout<<"true";
    }
    else{
        cout<<"false";

    }
}