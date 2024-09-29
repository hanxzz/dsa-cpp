#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    std::vector<int> v = {1,7,4,2,3};
    std::sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        cout<<v[i];
    }
}