#include<iostream>
using namespace std;




int main(){
    int digit,n;
    int revnum=0;
    cin>>n;
    int dup = n;
    while(n>0){
        digit = n%10;
        n= n/10;
        revnum = (revnum*10)+digit;
    }
    if(dup==revnum){
        cout<<"pal";
    }
    else{
        cout<<"not";
    }
    
}

// while(n>0){
//         digit = n%10;
//         n=n/10;
//         cout<< digit;
//     }