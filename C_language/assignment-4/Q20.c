// Q.20
// Write a program to input two floats for velocity and acceleration, compute time to stop (if acceleration negative). Then:
// Time < 10: "Quick Stop"
// 10 – 30: "Moderate"
// > 30: "Slow"
// If acceleration >= 0: "Invalid"
#include <stdio.h>  
int main()
{ float acc,vel;
  scanf("%f %f",&acc,&vel);
   float tim = vel/acc;
   if(acc < 0){
       if(tim < 10){
           printf("Quick Stop");
       }
       else if(tim>= 10 && tim <= 30){
           printf("Moderate");
       }
       else{
           printf("Slow");
       }
   }
   else{
       printf("Invalide acceleration not stop ever");
   }
    return 0;
}