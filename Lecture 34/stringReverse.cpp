#include<iostream>
using namespace std;

void reverse(int s, int e, string& str){
    //base case
    if(s>e){
        return;
    }
    swap(str[s],str[e]);
    s++;
    e--;
    reverse(s,e, str);

}


int main(){

    string sentence = "abcdef";
    reverse(0,sentence.length()-1,sentence);
    cout<<sentence;
}