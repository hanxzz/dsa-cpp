#include<iostream>
using namespace std;

class Hero{

    
    int health;
    public:

    Hero(){
        cout<<"Constructor called"<<endl;
        cout<<this;
    }
    char level;
    void print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h ){
        health = h;
    }
    void setLevel(char ch ){
        level = ch;
    }
};

int main(){
    Hero h1;
    cout<<"health "<<h1.getHealth()<<endl;
    h1.setHealth(30);
    cout<<"health "<<h1.getHealth();
    //h1.health = 70;
    //h1. level = 'A';
    cout<<h1.level<<endl;
}