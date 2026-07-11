#include <iostream>
using namespace std;

/**
 * Calculates the nth Fibonacci number using recursion.
 * The sequence is defined as: F(0)=0, F(1)=1, F(n)=F(n-1)+F(n-2)
 */
int fibonacci(int n) {
    // Base cases
    if (n <= 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}

int main() {
    int n = 10;
    cout << "Fibonacci number at position " << n << " is: "  << fibonacci(n) << endl;
    return 0;
}