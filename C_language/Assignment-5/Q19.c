// Q19. Write a program using a while loop to calculate the factorial of a given number.
#include <stdio.h>

 int main(){
     int result=1;
     int fac;
     int num = 1;
     scanf("%d",&fac);
     while(num<=fac){
         result = result*num;
         num = num+1;
     }
     printf("%d",result);
    return 0;
    
}