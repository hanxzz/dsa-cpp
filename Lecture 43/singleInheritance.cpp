#include<iostream>
using namespace std;

class Human{
    public:
    int age;
    int height;
    int weight;
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Human{
    
};

int main(){
    Dog obj1;
    cout<<obj1.age;
}