#include <iostream>
using namespace std;
//no of subarrays=[n*(n+1)]/2 where n is no of elements in  an array

void printSubarrays(int *arr, int n){
       int sum;
       for(int start=0; start < n; start++) {
              for(int end=start; end<n; end++) {
                     cout << "(" << start << "," << end << ")  ";
              }
              cout << endl;
       }
}
int main() {
       int arr[] = {1, 2, 3, 4, 5};
       int n = 5;
       printSubarrays(arr, n);
       return 0;
}