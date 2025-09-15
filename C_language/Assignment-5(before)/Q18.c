// Q18. Write a program using a while loop to print all multiples of 7 up to 70.
#include <stdio.h>

 int main(){
     int num=1;
     int mul;
     while(num<=10){
         mul = 7*num;
         printf("%d\n",mul);
         num = num+1;
     }
    return 0;
    
}