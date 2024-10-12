#include<iostream>
using namespace std;
class A{
    public:
int add(int num1, int num2){
    return num1+num2;
}
int add(int num1, int num2,int num3){
    return num1+num2+num3;
}
};

int main(){
    A obj;
    cout<<obj.add(10,20)<<endl;
    cout<<obj.add(10,20,30)<<endl;
}