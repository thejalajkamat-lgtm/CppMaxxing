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
int main(){
   cout<<"THe sum of digits of 1234 is "<<sum_digits(1234)<<endl;
   return 0;
}