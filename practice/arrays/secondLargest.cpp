#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
  public:

    int getSecondLargest(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int largest = arr[arr.size()-1];
        int slargest = INT_MIN;
        for(int i = arr.size()-1;i>=0;i--){
            if(arr[i]!= largest){
                slargest = arr[i];
                break;
            }
        }
        if(slargest==INT_MIN){
            return -1;
        }
        return slargest;
    }
};

