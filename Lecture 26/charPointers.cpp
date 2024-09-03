#include<iostream>
using namespace std;
int main(){

    char ch[6] = "abcde";
    cout<<ch<<endl;
    char *c = &ch[0];
    cout<<c<<endl; //prints entire string

    char temp = 'z'; //no null character
    char *p = &temp;
    cout<<p; //it wont stop untill it gets a null character hence the ans is zabcde
    
}