#include <iostream>
using namespace std;
int reverse_num(int n){
   int new_n;
   int rev = 0;
   while(n>0){
      new_n = n%10;
      rev = (rev*10)+new_n;
      n /= 10;
   }
   return rev;

}
// int palindrome(int n){
//    if(reverse_num(n) == n){
//       cout<<"It is a palindrome number";
//    }else{
//       cout<<"It is not a palindrome number";
//    }
// }
int main(){
   cout<<"The reverse of 1234"<< " is "<< reverse_num(1234);
   // palindrome(121);
    return 0;
}