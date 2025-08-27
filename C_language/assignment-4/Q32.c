// Q32. Write a program to input four floats (x1, y1, x2, y2), compute slope:
// Infinite: "Vertical"
// 0: "Horizontal"
// >0: "Rising"
// < 0: "Falling" If abs(slope) > 1: "Steep"
#include <stdio.h>
int main() {
     float x1,y1,x2,y2;
     scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
     float slop = (y2-y1)/(x1-x2);
     if((x2-x1) == 0){
         printf("Vertical");
     }
     else if(slop == 0){
         printf("Horizontal");
     }
     else if(slop > 0){
         if(slop > 1){
         printf("Steep");}
         else{
             printf("Rising");
         }
         
     }
     else{
         printf("Falling");
     }
    return 0;
}

       