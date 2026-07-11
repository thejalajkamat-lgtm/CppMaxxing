// reverse a number❌, palindrome..✅, , binary to decimal &vice versa, swap using pointers, stock price
//1)Reverse arr✅ 
// 2)find largest & second largest in arr,
// 3)remove duplicates from arr,
// 4) subarr(print, sum, maxsum),
// 5)linear & binary search, ✅
// 6)sort✅ 7)patterns, 8)pointers(2 and 1)✅

#include <bits/stdc++.h>
using namespace std;
int question_1(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i-1]==arr[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[] ={1,2,3,3,5};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr+n);
    for(int i=0;i<n; i++){
        cout << arr[i]<< ", ";
    }
    return 0;
}