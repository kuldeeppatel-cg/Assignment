// Q36 .Write a program to input pH and temperature, check safety:
// pH 6–8 and temp < 50: "Safe"
// pH < 6 and temp > 30: "Acidic Hot Risk" Use nested if–else for combinations.
#include <stdio.h>
int main()
{ int pH,temp;
  scanf("%d %d",&pH,&temp);
  if(pH >= 6 && pH <= 8 && temp < 50){
      printf("Safe");
  }
  else if(pH < 6 && temp > 30){
      printf("Acidic Hot Risk");
  }
  else{
      printf("Invalid input for this question");
  }
    return 0;
}