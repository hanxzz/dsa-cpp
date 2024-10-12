#include<iostream>
using namespace std;


class A{
    public:
    void sayHello(){
        cout<<"Hello hanish"<<endl;
    }
    int sayHello(string name, int age){
        cout<<"Hello "<< name <<endl;
        return 1;
    }
    void sayHello(string name){
        cout<<"Hello "<< name <<endl;
    }
};
int main(){
    A obj;
    obj.sayHello();
}