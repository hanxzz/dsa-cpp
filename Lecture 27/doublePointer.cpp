#include<iostream>
using namespace std;

void update(int **p){
    //p = p +1; NO CHANGE

    // *p = *p+1; CHANGE

    **p=**p+1;

}

int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    cout<<"printing p: "<<p<<endl;
    cout<<"address of p: "<<&p<<endl;

    //cout<< *p2 <<endl;

// ---------------
 /*   cout<<i<<endl;
    cout<< *p<<endl;
    cout<< **p2<<endl; // all 3 same value
    */
// ---------------

    cout<< i<<endl;
    cout<<  p<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"after"<<endl;
    cout<< i<<endl;
    cout<<  p<<endl;
    cout<<p2<<endl;
    
}
