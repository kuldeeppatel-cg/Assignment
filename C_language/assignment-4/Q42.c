// Q42 .Write a program to input three floats for forces, check if vector sum is zero (tolerance 0.1):
// If balanced: "Balanced"
// Else if sum > 0: "Positive Imbalance"
// Else: "Negative Imbalance"
#include <stdio.h>
#include <math.h>
 
  int main()
 {  float x,y,z,vecs;
    scanf("%f %f %f",&x,&y,&z);
    vecs = sqrt(x*x + y*y + z*z);
    printf("%f\n",vecs);
    if(vecs == 0 || vecs-0.1 == 0 || vecs+0.1 == 0){
        printf("Balanced");
    }
    else if( vecs > 0){
        printf("Positive Imbalance");
    }
    else{
        printf("Negative Imbalace");
    }
   return 0;  }
