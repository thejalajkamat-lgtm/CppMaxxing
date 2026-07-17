#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int count_num(int n){
    int count = 0;
    while(n>0){
       int num =n%10;
       count += 1;
       n /= 10;
    }
    return count;
}
int count_no(int n){
    int count = (int)(log10(n)+1);
    return count;
}
int reverse_num(int n){
    int rev = 0;
    while(n>0){
       int num =n%10;
       rev = (rev*10)+num;
       n /= 10;
    }
    return rev;
}
int palindrome(int n){
    if(n == reverse_num(n)) cout<< "True";
    else cout << "False";
}
int armstrong_num(int n){
    int original_n = n;
    int sum = 0;
    int num = 0;
    while(n>0){
        num = n%10;
        sum = sum + (num*num*num);
        n /= 10;
    }
    // return sum;
    if(sum==original_n) cout<<"It is armstrong";
    else cout<< "Not armstrong";

}
int print_divisors(int n){
    for(int i=1;i<=n;i++){   
        if(n%i==0){
            cout<< i<< ",";
        }   
    }
}
int prime_num(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }else{
            return true;
        }
    }
}
int another_prime(int n){
    int cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if((n/i)!=i) cnt++;
        }
    }
    if(cnt == 2) cout << "true";
    else cout << "false";
}
int gcd_hcf(int a, int b){
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}
int main(){
    cout << count_num(123)<<endl;
    cout << count_no(123)<< endl;
    cout << reverse_num(123)<< endl;
    palindrome(121);
    cout<< endl;
    armstrong_num(153);
    cout<< endl;
    print_divisors(12);
    cout << endl;
    another_prime(13);
    cout << endl;
    cout << gcd_hcf(20,40);
    return 0;
}