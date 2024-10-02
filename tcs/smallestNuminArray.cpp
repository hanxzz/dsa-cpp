#include <iostream>
 
using namespace std;

int SmallestElement(int arr[],int n){
    int mini = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}


int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int min = SmallestElement(arr1, n);
  cout << "The smallest element in the array is: " << min << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  min = SmallestElement(arr2, n);
  cout << "The smallest element in the array is: " << min;
  return 0;
}