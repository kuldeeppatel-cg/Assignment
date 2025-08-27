// Q38. Write a program to input integer n, compute factorial (hardcode up to 10), then:
// Factorial digit sum > n: "Digit Sum Larger"
// == n: "Equal"
// < n: "Smaller"
#include <stdio.h>
 int fac(int num){
     int res = 1;
     for(int i=1;i<=num;i++){
         res = res*i;
     }
     return res;
 }
  int main()
 {   int num1,fact;
    scanf("%d",&num1);
    fact = fac(num1);
 int dig,sum;
 sum = 0;
 for(int j=10; j >= 10; j = 10){
     dig = fact%j;
     fact = fact/j;
     sum = sum + dig;
     if(fact == 0){
         break;
     }
    
 }
  if(sum > num1){
      printf("Digit sum Larger");
  }
  else if(sum == num1){
      printf("Equal");
  }
  else{
      printf("Smaller");
  }
 

return 0;}