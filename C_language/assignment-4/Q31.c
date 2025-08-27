// Q31 Write a program to input a float for stock price change (%) and categorize:
// > 5: "Strong Gain"
// 0 – 5: "Mild Gain"
// -5 – 0: "Mild Loss"
// < -5: "Strong Loss" If exactly 0: check previous change (second float):
// Positive: "Stabilized Up"
// Else: "Stabilized Down"

#include <stdio.h>
#include <math.h>
int main()
 { float day1,day2,day3;
   scanf("%f %f %f",&day1,&day2,&day3);
   float change = day2 - day1;
   float change1 = day3 - day2;
      if(change > 5){
          printf("Strong Gain");
      }
      else if(change <= 5 && change <= 0){
          printf("Mild Gain");
      }
      else if(change <= 0 && change >= -5){
          printf("Mild Loss");
      }
      else if(change < -5){
          printf("Strong Loss");
      }
      else if(change1 < -5 && change1 > 0){
          printf("Stabilized up");
      }
      else{
          printf("Stabilized Down");
      }
    return 0;
}