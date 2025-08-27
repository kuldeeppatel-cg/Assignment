// Q14 Write a program to input two integers m and n, 
// find GCD using subtraction method (nested if until equal, assume positive and small). Then:
// If GCD == 1: "Coprime"
// If GCD > 1 and even: "Even Common"
// Else: "Odd Common"

#include <stdio.h>

int main()
{ int num1,num2;
  scanf("%d %d",&num1,&num2);
  for(int i=1;i=i;i=i){
      if(num1 > num2){
          num1 = num1 - num2;
          if(num1 == num2){
            break;
          }
      }
      else{
          num2 = num2 - num1;
          if(num1 == num2){
             break;
          }
      }
  }
 if(num1 == 1){
     printf("Coprime");
 }
 else if(num1 > 1){
      if(num1%2 == 0){
          printf("Even Common");
      }
      else{
          printf("Odd Common");
      }
 }
    return 0;
}