#include <bits/stdc++.h>
using namespace std;
int hash_arr(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    //precompute using hash function
    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    cout << "Answer: ";
while(q--){
    int number;
    cin >> number;
    //fetch
    cout << hash[number] << endl;
}
}

int hash_char(){
    string s;
    cin >> s;
    //precomputer using hash and ASCII
    int hash[26] = {0};    //if we have only lowercase else hash[256]
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;  // if we have uppercase then don't do - 'a'
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        // fetch 
        cout << hash[c-'a']<< endl;
    }
}
 
int hash_map(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int , int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    //----DID NOT UNDERSTAND----
    // for(auto it : mpp){
    //     cout << it.first << "->" << it.second << endl;
    // }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << mpp[number]<< endl;
    }

}
int main(){
    hash_map();
    return 0;
}