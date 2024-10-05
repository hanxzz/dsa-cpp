#include<iostream>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight = w;
        return w;
    }
};

class Male:public Human{
    public:
    string color;   

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};

int main(){
    Male object1;
    cout<<object1.color<<endl; 
    cout<<object1.age<<endl;
}