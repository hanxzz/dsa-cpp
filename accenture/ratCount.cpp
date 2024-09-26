#include<iostream>
using namespace std;

int calculate (int r, int unit, int arr[], int n){
    if (n == 0) {
        return -1;  // Return -1 if the array is null
    }
    int foodreq = r*unit;
    int foodconsumed = 0;
    int i = 0;
    for(i;i<n;i++){
        foodconsumed = foodconsumed + arr[i];
        if(foodconsumed>=foodreq){
            return i+1;
        }
    }
    return 0;
}




int main(){
    int r;
    cin>>r;
    int unit;
    cin>>unit;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
      cin >> arr[i];
    }
  cout << calculate (r, unit, arr, n);
  return 0;

}