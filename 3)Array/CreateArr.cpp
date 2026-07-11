#include <iostream>
using namespace std;

int main() {
       int marks[] = {1, 2, 3}; 
       cout << marks[0]<< endl;                         
       cout << marks [1]<< endl;  
       cout << marks [2] << endl; 
       cout << marks [3] << endl;  
       int n = sizeof(marks)/sizeof(int);
       cout<< n<< endl;
       for (int idx=0; idx<n ; idx++) { 
            cout << marks[idx] << " " ; 
       }
       cout << endl;

    return 0;
}