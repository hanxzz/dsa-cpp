#include<iostream>
#include<string>
using namespace std;
int CheckPassword (char str[], int n){
    if(n<4){
        return 0;
    }
    if(str[0] >= 48 && str[0]<=57){
        return 0;
    }
    int a = 0, cap = 0, nu = 0;
    for(int a;a<n;a++){
        if(str[a]== ' ' ||str[a]== '/'){
            return 0;
        }
        if(isupper(str[a])){
            cap++;
        }
        if(isdigit(str[a])){
            nu++;
        }
    }
    return cap>0 && nu>0?1:0;
}


int main(){
    string s;
    cin>>s;
    int len = s.size();
    cout<<CheckPassword(&s[0],len);
}