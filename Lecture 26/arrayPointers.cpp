#include<iostream>
using namespace std;
int main(){

    // int arr[10] = {23,122,41,67};
    // cout<<"address of first memory block: " <<arr<<endl;
    // cout<<"address of first memory block: " <<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<(*arr)+1<<endl;
    // cout<<arr[2]<<endl;
    // cout<<*(arr+2)<<endl;

    // int i = 3;
    // arr[i]= *(arr+i);
    // i[arr]= *(i+arr);

    // int temp[10]; 
    // cout<<sizeof(temp)<<endl;

    // int *ptr = &temp[0];

    // cout<<sizeof(ptr)<<endl; //8
    // cout<<sizeof(*ptr)<<endl; //4
    // cout<<sizeof(&ptr)<<endl; //8

    int a[20] = {1,2,3,4,5};
    cout<<&a[0]<<endl;
    cout<<&a;
    cout<<a;

    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<< "address of pointer"<<&p<<endl;
}