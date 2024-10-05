#include<iostream>
using namespace std;

class Human{
    public:
    int age = 10;
    int height;
    int weight;
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog{
    public:
    void barking(){
        cout<<"barking"<<endl;
    }
};

class HybridSpecies:public Human, public Dog{

};

int main(){
    HybridSpecies obj1;
    obj1.barking();
    obj1.speak();
}