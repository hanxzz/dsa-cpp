#include<iostream>
#include<vector>
using namespace std;


// void update1(int n){
//     n++;
// }
void update2(int& n){
    n++;
}

int main(){
    // int i = 5;
    // int &j = i;  //creating a reference variable

    // cout<<i<<endl;
    // cout<<j<<endl;

    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;

    int n = 5;
    cout<< "Before "<<n<<endl;
    update2(n);
    cout<< "After "<<n<<endl;
}