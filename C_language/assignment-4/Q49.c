// Q49 Write a program to input base and exponent (small), compute power manually (exp <= 5),
//  then check if result is palindrome.

#include <stdio.h>
#include <math.h>
int main()
{ int base,expo,res,check,check1,upd,check2,check3,upd1;
     scanf("%d %d",&base,&expo);
     res = pow(base,expo);
     printf("%d\n",res);
     if(res>=100 && res<=999){
         check1 = res%10;
         check  = res/100;
         if(check == check1){
             printf("Palindrome Number");
         }
         else{
             printf("Not Palindrome Number");
         }
     }
     else if(res>=1000 && res <= 9999 ){ 
         check1 = res%10;  
         check  = res/1000; 
         upd = res/10;    
         upd1 = upd%100;  
          if(check == check1 && upd1%11 == 0){
              
                 printf("Palindrome Number"); 
              }
         
         else{
             printf("Not Palindrome Number");
         }
     }
     else if(res > 10 && res < 100 && res%11 == 0){
         printf("Palindrome Number");
     }
     else{
         printf("Please input base between 1 to 5");
     }
     
    return 0;
}