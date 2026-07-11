#include <iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int selection_sort(int arr[], int n){
    for(int i=0; i<n;i++){  //n or n-1 anything 
        int minIndex = i;
        for(int j =i+1; j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);

    }
    print(arr, n);
}
int main(){
    int arr[]={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    return 0;
}