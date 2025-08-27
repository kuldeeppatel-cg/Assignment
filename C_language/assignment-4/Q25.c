// Q25 Write a program to input an integer (positive, up to 10^6) and 
// check if it's a happy number (sum of squared digits repeatedly reaches 1).
//  Limit checks to 10 steps using if–else.

#include <stdio.h>
#include <math.h>
int main()
 { int num,dig,num1;
  int sum = 0;   
  scanf("%d",&num1);
  if(num1<10){
  num = pow(num1,2); }
  else{
      num = num1;
  }// 16
  for(int i=1;i <= 1000;i++){
      dig = num%10;        
      num = num/10;          
      sum += pow(dig,2); 
      
      if(num == 0){
          if(sum != 1){  
             
              num = sum;   
              sum = 0;  
              
          }
          else if(sum == 1){
              printf("Happy Number");
              break;
          }
          else if(sum == num1){
              printf("UnHappy Number");
              break;
          }
          if(i==100){
              printf("Unhappy number");
          }
      }
  }
    return 0;
}