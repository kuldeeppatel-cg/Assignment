// Q23. Write a program using a while loop to count down from a given number to 1.
#include <stdio.h>
 int main(){
     int inp;
     scanf("%d",&inp);
     int num = inp;
     while(1<=num){
         printf("%d\n",num);
         num = num-1;
     }
    
    return 0;
    
}