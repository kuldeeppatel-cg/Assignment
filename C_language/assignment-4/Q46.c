// Q46 .Write a program to input three integers and check triangle inequality. If valid:
// Classify angles via cosine rule (approx without sqrt): acute, obtuse, or right.


#include <stdio.h>

int main()
{ float a,b,c,an_a;
  scanf("%f %f %f",&a,&b,&c);
  an_a = (b*b + c*c -a*a)/(2*b*c);
  if(a+b > c && b+c> a && c+a > b){
      if(an_a == 0){
        printf("Right angle");
      }
      else if(an_a > 0){
          printf("Acute angle");
      }
      else{
          printf("Obtuse angle");
      }
  }
  else{
      printf("Invalid Triangle");
  }
    return 0;
}
//  cos0 = 1 cos90 = 0
//  cos(90 to 180) 0 to -1 
//   c = asq + bsq - csq