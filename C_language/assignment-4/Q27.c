#include <math.h>
#include <stdio.h>
int main()
{ int day,mon,year;
  scanf("%d %d %d",&day,&mon,&year);
 if(year >= 1900 && year <= 2100 && mon <= 12){
     if(mon==2 && day <= 29){
         if(mon%4 == 0 && day <= 29 || mon%4 != 0 && day<28){
            printf("valid");
         }
         else{
             printf("Invalid");
         }
     else if(mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12 || mon != 2 ){
         if(day <= 31){
            printf("valid");
         }
         else{
             printf("Invalid");
         }
     }
     else if(mon != 2){
         if(day <= 30){
             printf("valid");
         }
         else{
             printf("Invalid");
         }
     }
     else{
         printf("Invalid");
     }
 } }
   else{
       printf("Invalid");
   }
    return 0;
}

 












