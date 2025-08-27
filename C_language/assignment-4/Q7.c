// Q7 Write a program to input an integer n and check if it is a perfect number (sum of proper divisors equals n). 
// Limit checking divisors up to sqrt(n) approximation using if conditions (assume n <= 1000, no loops, nested ifs).

#include <stdio.h>

int main()
{ int num,i;
  scanf("%d",&num);
  int sum = 0;
  for(i=1;i<=num/2;i++){
      if(num%i == 0){
          sum = sum+i;
      }
  }
  if(sum == num){
      printf("Perfect Number");
  }
  else{
      printf("Not Perfect Number");
  }
    return 0;
}