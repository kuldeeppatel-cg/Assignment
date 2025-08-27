// Q50 .Write a program to input interest rate and principal, compute simple interest for 5 years:
// Total > 2 × principal: "High Growth"
// Else: "Low" If rate < 0: "Invalid"

#include <stdio.h>

int main()
{ float rate,princ;
  scanf("%f %f",&rate,&princ);
  float SI = (princ*rate*5)/100;
  float total = SI + princ;
  if(total > 2*princ){
      printf("High Growth");
  }
  else if(rate<0){
     printf("Invalid")   ;
  }
  else{
      printf("Low Growth");
  }
    return 0;
}