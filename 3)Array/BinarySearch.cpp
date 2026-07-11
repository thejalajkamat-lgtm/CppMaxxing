#include <iostream>
using namespace std;

int binSearch(int*arr, int n, int key) {
    int st = 0, end = n-1;

    while(st <= end) {
        int mid = (st + end) / 2;
        if (arr[mid] > key) {
            end = mid-1;  
        }else if(arr[mid] < key) {  //2nd half
            st = mid + 1;
        }else {
            return mid;  // key found
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    int key = 12;

    cout <<"12 is found at index "<< binSearch(arr, n, key);
      
       return 0;
}
// according to time space compleity O(logn) is way more efficient than O(n)
// this code is O(n) after learning time space complexity, we can write code for O(logn)