// write a program to input four floats a,b,c,d for equation ax^2 + bx+c = d. Compute discriminant:
//    then if a = 0 : linear equition 
//       else quadratic
//       if disc >= 0 check if both roots positive, one positive one negative, or both negative
//       else Imaginary

#include <stdio.h>
#include <math.h>
int main()
{ float a,b,c,d;
  scanf("%f %f %f %f",&a,&b,&c,&d);
  float dis = sqrt(b*b-4*a*(c-d)); 
  if(a == 0){
      printf("Linear Equation");
  }
  else{
      if(dis == 0){
         if(b>0){
             printf("both root negative");
         }
         else{
             printf("both root positive");
         }
      }
      else if(dis > 0){
          if(dis > b){
              printf("one root +ve and other -ve");
          }
          else{
              printf("both roots -ve");
          }
      }
      else{
          printf("Imaginary roots");
      }
  }

    return 0;
}