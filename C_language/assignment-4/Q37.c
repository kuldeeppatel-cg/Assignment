// Q37 Write a program to input integers a, b, c, check if a^2 + b^2 == c^2 (Pythagorean triple).
// If yes:
// GCD(a, b, c) == 1: "Primitive Triple"
// Else: "Non-Primitive"
// Else: "Not Pythagorean"

#include <stdio.h>
#include <math.h>
int main()
 { int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   int check = pow(a,2) + pow(b,2);
   if(check == pow(c,2)){
       while(a != b){
           if(a > b){
               a = a - b;
           }
           else if(b > a){
               b = b -a;
           }
           else{
              a = b;
           }
       }
       while(a != c){
           if(c > a){
               c = c - a;
           }
           else if(a > c){
               a = a - c;
           }
           else if(a = c){
               break;
           }
       }
       
      if(a == 1){
          printf("Primitive Triple");
      }
      else{
          printf("Non-Primitive");
      }
   }
   else{
       printf("Not Pythagorean Triple");
   }
    return 0;
}