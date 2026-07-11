#include <iostream>
using namespace std;
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
int main(){
   armstrong_number(153);
    return 0;
}