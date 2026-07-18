#include<bits/stdc++.h>
using namespace std;
int add_num(int a,int b){
    return a+b;
}
int hello(){
    cout<<"Hello World";
    hello();
}
int print_name(int i, int n){
    if(i>n){
        return i;
    }
    cout << "Jalaj ";
    print_name(i+1,n);
}
int one_n(int i,int n){
    if(i>n){
        return i;
    }
    cout << i << " ";
    one_n(i+1, n);
}
int n_one(int i, int n){
    if(i<1){
        return i;
    }
    cout << i << " ";
    n_one(i-1, n);
}
int sum_n(int n){
    int sum=0;
    if(n<0){
        return 0;
    }
    return n + sum_n(n-1);
}
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int rev_arr(int i, int arr[], int n){
    if(i>=n/2) return i;
    swap(arr[i], arr[n-i-1]);
    rev_arr(i+1, arr, n);
}
int palindrome(int i, int arr[], int n){
    if(i>n/2){
        return true;
    }
    if(arr[i]!=arr[n-i-1]){
        return false;
    }
    return palindrome(i+1, arr, n);
}
int fibonacci(int n){
    if(n<=1) return n;
    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last + slast;
}
int main(){
    int arr[]={1,2,3,4,5};
    int ara[]={1,2,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    int g = sizeof(ara)/sizeof(int);
    cout << add_num(1,2)<< endl;
    // hello();
    print_name(1,5);
    cout << endl;
    one_n(1,5);
    cout << endl;
    n_one(5,1);
    cout << endl;
    cout <<sum_n(10)<< endl;
    cout << fact(5)<< endl;
    rev_arr(0,arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << palindrome(0, ara, g)<< endl;
    cout << fibonacci(4);
    return 0;
}