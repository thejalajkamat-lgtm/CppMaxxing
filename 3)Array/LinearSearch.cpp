#include <iostream>  // search for a key in an array
using namespace std;

int linearSearch(int arr[], int n, int key) {     //*arr = arr[]
    for (int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int main() {
      int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
      int n = sizeof(arr)/sizeof(int);

      cout << linearSearch(arr, n, 12 )<< endl;
      cout << sizeof(n) << endl;
     
      return 0;
}
// if no of keys in array increases then the no. of operations also increase
// inorder to reduce the no. of op. we need to write code using time&space 
// complexity which we will study later