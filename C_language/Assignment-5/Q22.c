// Q22. Write a program using a while loop to print squares of numbers from 1 to 5.
#include <stdio.h>

 int main(){
     int num = 1;
     int mul;
     while(num<=5){
         mul = num * num;
         printf("%d\n",mul);
         num = num+1;
     }
    
    return 0;
    
}