#include<iostream>
using namespace std;
class A{
    public:
    int add(int x, int y, int z = 0, int w = 0){
        return(x+y+z+w);
}
};

int main(){
    A obj;
    cout<<obj.add(10,20)<<endl;
    cout<<obj.add(10,20,30)<<endl;
    cout<<"heelo hehe";
}