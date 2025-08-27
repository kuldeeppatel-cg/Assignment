// Q40 Write a program to input four integers (bowling scores, 0–10), sum them:
// All 10: "Strike Game"
// Any 0: "Poor"
// Else: average score category
#include <stdio.h>

 
  int main()
 { int sco,sco1,sco2,sco3;
   scanf("%d %d %d %d",&sco,&sco1,&sco2,&sco3);
   if(sco <= 10 && sco1 <= 10 && sco2 <= 10 && sco3 <= 10){
       if(sco == 10 && sco1 == 10 && sco2 == 10 && sco3 == 10){
           printf("Strike Game");
       }
       else if(sco == 0 || sco1 == 0 || sco2 == 0 || sco3 == 0){
           printf("Poor");
       }
       else{
           printf("Average score category");
       }
   }
   else{
       printf("Please Enter score 0 to 10");
   }
return 0;}