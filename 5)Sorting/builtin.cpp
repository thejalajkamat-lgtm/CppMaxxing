#include<bits/stdc++.h>
using namespace std;

//ASENDING ORDER --> sort(start, end);
//DESCENDING ORDER --> sort(start, end, greater<int>());
int main(){
    int arr[] = {6,4,2,3,5,1};
    int n = sizeof(arr)/sizeof(int);
    cout << "ASENDING ORDER"<< endl;
    sort(arr, arr+n); //ASENDING ORDER
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
    cout<<"DESCENDING ORDER"<< endl;
    sort(arr, arr+n, greater<int>()); //DESCENDING ORDER
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "Hoes are horrible";
    return 0;
}