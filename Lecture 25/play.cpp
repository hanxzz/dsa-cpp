#include<iostream>
using namespace std;
int main(){

    int num = 5;
    int *p = &num;

    cout<<"before "<<num<<endl;
    (*p)++;
    cout<<"after "<<num<<endl;
    //copying a pointer

    int *q = p;
    cout<< p << " - " <<q<<endl;
    cout<< *p << " - " <<*q<<endl;
}