// Q21. Write a program using a while loop to print numbers from 1 to a given number entered by the user.
#include <stdio.h>

 int main(){
     int inp;
     scanf("%d",&inp);
     int num = 1;
     while(num<=inp){
         printf("%d\n",num);
         num = num+1;
     }
    
    return 0;
    
}