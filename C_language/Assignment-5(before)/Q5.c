// Q5. Write a program using a for loop to print the multiplication table of a given number.
#include <stdio.h>

 int main(){
 int num,table;
 scanf("%d",&num);
 for(int num1=1;num1<=10;num1=num1+1){
      table = num*num1;
     printf("%d\n",table);
 }
    return 0;
}