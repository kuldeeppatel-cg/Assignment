// Q21
// Write a program to input three integers a, b, c for quadratic equation and compute roots if discriminant >= 0. Then:
// Both roots real & positive: "Positive Roots"
// One positive & one negative: "Mixed"
// Both negative: "Negative Roots"
// If discriminant < 0: "Imaginary"
#include <stdio.h>
#include <math.h>
int main()
{  int a,b,c,disc;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   disc = sqrt(b*b -4*a*c);               
   if(disc == 0){
      if(b>0) {
          printf("Both roots Negative");
      }
      else{
          printf("Both roots real and Positive");
      }
   }
   else if(disc>0){
       if(b>0 && disc<b){
           printf("Both roots -ve");
       }
       else if(b<=0 && disc>b){
           printf("Mixed");
       }
       else{
           printf("Roots are zero and -ve");
       }
   }
   else{
       printf("Imaginary Roots");
   }
    return 0;
}