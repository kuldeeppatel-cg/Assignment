// Q17.Write a program to input a float for BMI and categorize:
// < 18.5: "Underweight"
// 18.5 – 24.9: "Normal"
// 25 – 29.9: "Overweight"
// >= 30: "Obese"
// If > 35: "Severe" Also, if BMI > 40, separately print "Extreme"

#include <stdio.h>

int main()
{ float bmi;
  scanf("%f",&bmi);
  if(bmi < 18.5 ){
      printf("Underweight");
  }
  else if(bmi > 18.5 && bmi < 24.9){
      printf("Normal");
  }
  else if(bmi > 25 && bmi < 29.9){
      printf("Overweight");
  }
  else if(bmi>= 30 && bmi <= 35){
       printf("Obese");
  }
  else if(bmi > 35 && bmi <= 40){
       printf("Severe");
  }
  else{
      printf("Extreme");
  }
  
    return 0;
}