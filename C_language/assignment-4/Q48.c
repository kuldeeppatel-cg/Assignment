// Q48 Write a program to input four floats (exam scores), drop lowest using min ifs, average remaining:
// = 90: Grade A
// etc. If dropped score < 50: "Weak Area Alert"
#include <stdio.h>
#include <stdbool.h>
int main(){
  float sco1,sco2,sco3,sco4,avg;
  scanf("%f %f %f %f",&sco1,&sco2,&sco3,&sco4);
  avg = (sco1+sco2+sco3+sco4)/4;
  if(avg >= 90){
      printf("Grade A");
  }
  else if(avg < 50){
      printf("Weak Area");
  }
  else{
      printf("Not define by question");
  }
    return 0;
}