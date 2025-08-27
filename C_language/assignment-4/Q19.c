// Q19
// Write a program to input an integer n (1–1000) and 
// check if it's a narcissistic number (sum of digits raised to power of digit count equals n). 
// Use if–else to handle cases:
// 1-digit: trivial true
// 2-digit: impossible
// 3-digit: check normally

#include <stdio.h>
#include <math.h>
int main()
{ int num,fir,las,upd,mid,res;
  scanf("%d",&num);
  if(num > 100 && num < 1000){
      fir = num/100;
      las = num%10;
      upd = num%100;
      mid = upd/10;
     res = pow(fir,3) + pow(mid,3) + pow(las,3);
     if(res == num){
         printf("Narcissistic Number");
     }
     else{
         printf("Not Narcissistic Number");
     }
  }
  else if(num >= 0 && num <= 9){
      printf("Narcissistic Number");
  }
  else{
      printf("Not Enter 3 digit number");
  }
    return 0;
} 