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

void reverse(char arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
    char name[] = "hanish";
    int n = getLength(name);
    reverse(name,n);
    cout<<name;
    
}