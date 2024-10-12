#include<iostream>
using namespace std;

int isSorted(int n, vector<int> a) {
    for(int i = 1;i<n;i++){
      if(a[i]<a[i-1]){
        return false;
      }
    }
    return true;
}

//optimal

int removeDuplicates(vector<int> &arr, int n) {
	int i = 0;
		for(int j = i+1;j<n;j++){
			if(arr[i]!=arr[j]){
				arr[i+1] = arr[j];
				i++;
			}
		}
		return i+1;
}