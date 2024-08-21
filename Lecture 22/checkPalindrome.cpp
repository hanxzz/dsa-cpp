#include<iostream>
#include <vector>
using namespace std;
int getLength(char name[]){
    int count = 0;
    for(int i = 0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
    char arr[20];
    cin>> arr;
    int len = getLength(arr);
    cout<<"Palindrome or not : " <<checkPalindrome(arr,len);
}