// Q4 Write a program to input an integer (assumed between 100 and 999) and check 
// if the sum of its digits is divisible by the product of its digits.
//  Handle zero digits carefully to avoid division by zero.

#include <stdio.h>

int main()
{ int num,i,sum,prod,dig,res;
  sum = 0;
  prod = 1;
  scanf("%d",&num);
  for(i=10;i>=10;i=i){
      dig = num%10;
      sum = sum + dig;
      if(dig != 0){
      prod = prod*dig;}
      num = num/10;
      if(num == 0){
          break;
      }
  }
  if(sum%prod == 0){
      printf("Yes divisible");
  }
  else{
      printf("Not divisible");
  }
    return 0;
}