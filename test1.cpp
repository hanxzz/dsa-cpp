#include<iostream>
using namespace std;
int main(){
    int num = 5;
    
    int *ptr = &num;
    cout<<"Address of num is: "<<ptr<<endl;
    cout<<"Value of num is: "<<*ptr<<endl;

    double d = 4.2;

    double *ptr2 = &d;
    cout<<"Address of d is: "<<ptr2<<endl;
    cout<<"Value of d is: "<<*ptr2<<endl;
}