#include <iostream>
using namespace std;

int main() {
       int arr [] = {7, 5, 2, 1, 3}; 
       int n = sizeof(arr) / sizeof(int) ;

    int max = arr[0];
    int min = arr [0];
    for (int i=0; i<n ; i++) {
        if (arr [i] > max)  {
          max = arr[i] ;
            
        }
    }
    for (int i=0; i<n; i++) {
        if (arr [i] < min) {
            min = arr [i] ;
            
        }
    }
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;

   
       return 0;
}
//NOTE - void printArr( int arr[]) {.....}
//       void printArr(int*arr) {.....}      BOTH R SAME AKA array name can be represented in pointer