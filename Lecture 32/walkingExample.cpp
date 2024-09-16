#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    cout<<"source: "<<src<<endl;
    cout<<"destination: "<<dest<<endl;
    if(src==dest){
        cout<<"reached";
        return ;
    }
    reachHome(src+1,dest);
    }

int main(){
    int dest = 10;
    int src = 1;

    reachHome(src,dest);
}