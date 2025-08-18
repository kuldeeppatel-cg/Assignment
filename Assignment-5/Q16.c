#include <stdio.h>

 int main(){
     int num=0;
     int sum = 0;
     while(num<=50){
         sum = sum + num;
         num=num+1;
     }
      printf("%d\n",sum);
    return 0;
    
}