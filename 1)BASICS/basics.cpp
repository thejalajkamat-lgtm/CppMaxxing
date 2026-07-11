// Factorial, Prime, sum of digits, reverse a nummber, palindrome, fibonnaci, armstrong, binary to decimal &vice versa
#include <iostream>
using namespace std;

int sum_digits(int n){
   int new_n;
   int sum = 0;
   while(n>0){
      new_n = n%10;
      sum += new_n;
      n /= 10;
   }
   return sum;
}

int reverse_num(int n){
   int new_n;
   int rev = 0;
   while(n>0){
      new_n = n%10;
      rev = (rev*10)+ new_n;
      n /= 10;
   }
   return rev;
}
int palindrome(int n){
   if(reverse_num(n) == n){
      cout<<"It is a palindrome number";
   }else{
      cout<<"It is not a palindrome number";
   }
}

int fibonnaci(){
   int a=0, b=1, c, n=5;
   for(int i=0; i<=n;i++){
      c = a + b;
      cout<<c<<" "; 
      a = b;
      b = c;    
   }
}

int armstrong_number(int n){
   int original_num = n;
   int sum = 0;
   while(n>0){
      int digit = n%10;
      sum = sum + (digit*digit*digit);
      n = n/10;
   }
   if(sum == original_num){
      cout<<"It is an armstrong number";
   }else{
      cout<<"It is not an armstrong number";
   }
}
int pointers(){
    int a = 10,  b= 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    cout<<ptr1<<ptr2<<endl;
    cout<<*ptr1<<*ptr2<<endl;
}

int decimal_binary(){

}
int binary_decimal(){
   
}

int main(){
   cout<<sum_digits(1234)<<endl;
   cout<<reverse_num(1234)<<endl;
   palindrome(121);
   cout<<endl;
   cout<<fibonnaci()<<endl;
   armstrong_number(153);
   cout<<endl;
   pointers();
   return 0;
}
