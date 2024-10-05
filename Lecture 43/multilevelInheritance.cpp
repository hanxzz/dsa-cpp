#include<iostream>
using namespace std;

class Human{
    public:
    int age = 10;
    int height;
    int weight;
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Human{
    
};

class Puppy:public Dog{

};

int main(){
    Puppy obj1;
    cout<<obj1.age;
}