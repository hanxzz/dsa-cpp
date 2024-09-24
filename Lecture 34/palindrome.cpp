#include<iostream>
using namespace std;

bool checkPalindrome(int s, int e, string str){
    if(s>e){
        return true;
    }

    if(str[s]!=str[e]){
        return false;
    }
    else{
        return checkPalindrome(s+1,e-1,str);
    }
}


int main(){

    string name = "mom";
    cout<< endl;

    bool isPalindrome = checkPalindrome(0, name.length()-1,name);
    cout<< isPalindrome;
}