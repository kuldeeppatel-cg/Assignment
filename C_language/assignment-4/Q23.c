// Q23=> Write a program to input five floats for daily temperatures, find median. Then:
// Median > 30: "Hot Week"
// 20 – 30: "Mild"
// < 20: "Cold" If any day < 0: override to "Freezing Alert"


#include <stdio.h>
int main()
{float temp1,temp2,temp3,temp4,temp5;
 scanf("%f %f %f %f %f",&temp1,&temp2,&temp3,&temp4,&temp5);
 float med = (temp1+temp2+temp3+temp4+temp5)/5;
 if(temp1<0||temp2<0||temp3<0||temp4<0||temp5<0){
     printf("Freezomg Alert");
 }
 else if(med>30){
     printf("Hot Week");
 }
 else if(med>20 && med>30){
     printf("Mild");
 }
 else{
     printf("Cold");
 }

 
    return 0;
}