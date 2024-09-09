#include<iostream>
using namespace std;
int main(){
    int num = 5;

    cout<<num<<endl;

    //address of operator

    cout<< "address of num is: "<<&num<<endl;

    int *ptr = &num;

    cout<<"value is: "<<ptr;
}