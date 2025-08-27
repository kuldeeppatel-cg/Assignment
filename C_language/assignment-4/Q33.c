// Q33. Write a program to input an integer k (1–100) and check 
// if it's a Kaprekar number (square split and sum equals k).
//  Handle different digit counts.
#include <stdio.h>
int main() {
     int num,sq,pair1,pair2,pair;
     scanf("%d",&num);
     sq = num*num;
     if(sq>10 && sq < 99){
         pair1 = sq/10;
         pair2 = sq%10;
         pair = pair1+pair2;
         if(pair == num){
             printf("Kaprekar number");
         }
         else{
             printf("not Kaprekar number");
         }
     }
     else if(sq > 1000 && sq < 9999){
          pair1 = sq/100;
         pair2 = sq%100;
         pair = pair1+pair2;
         if(pair == num){
             printf("Kaprekar number");
         }
         else{
             printf("not Kaprekar number");
     }}
    else {
         printf("Not Kaprekar number");
     }
    return 0;
}
