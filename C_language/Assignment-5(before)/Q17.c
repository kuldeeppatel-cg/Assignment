// Q17. Write a program using a while loop to print numbers in reverse from 10 to 1.
#include <stdio.h>

 int main(){
     int num=10;
     while(num>=1){
         printf("%d\n",num);
         num = num-1;
     }
    return 0;
    
}