#include <iostream>
using namespace std;
//no of subarrays=[n*(n+1)]/2 where n is no of elements in  an array

void  maxSubarraySum1(int *arr, int n){
       int maxSum;
       for(int start=0; start < n; start++) {
              for(int end=start; end<n; end++) {
                int currSum = 0;
                for (int i=start; i<=end; i++) {
                    currSum += arr[i];
                }
                cout<< currSum <<",";
                maxSum = max(maxSum, currSum);
              }
              cout << endl;
       }
       cout<<"The maximum subarray sum is = "<< maxSum;
}

int main() {
       int arr[] = {2, -3, 6, -5, 4, 2};
       int n = sizeof(arr) / sizeof(int);
       
       maxSubarraySum1(arr, n); 
       return 0;
}

// Time Complexity is O(n^3)
// A code can be written for O(n^2) as well