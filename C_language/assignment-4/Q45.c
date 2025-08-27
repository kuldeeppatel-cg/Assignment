// Q45 Write a program to input GPA (0–4.0) and credits, compute GPA × credits:
// 50: "High Achievement"
// 30–50: "Medium"
// < 30: "Low" If GPA < 2.0: "Probation"


#include <stdio.h>

int main()
{ float gpa,credit,res;
  scanf("%f %f",&gpa,&credit);
  if(gpa >= 0 && gpa <= 4){
      res = gpa*credit;
      if(res>50){
        printf("High Achievement");
     }
     else if(res >= 50 && res <= 30){
         printf("Medium");
     }
     else if(res < 30){
         printf("Low");
     }
     else{
         printf("Probation");
     }
  }
  else{
      printf("You enter wrong gpa");
  }
        
  
    return 0;
}