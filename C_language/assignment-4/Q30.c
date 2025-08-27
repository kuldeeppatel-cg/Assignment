// Q30 Write a program to input a date (day, month, year) and check if it's a palindrome in DDMMYYYY format. If yes:
// Year > 2000: "Future Palindrome"
// Else: "Past Palindrome"
#include <stdio.h>
#include <math.h>
int main(){
  int date,month,year,cod1,cod2,cod3,doy,doy1,com1,com2,com3,dom,dom1;
    scanf("%d %d %d",&date,&month,&year);
     cod1 = year%100;  
     cod2 = cod1%10;  
     cod3 = cod1/10;  
     doy  = date%10 ;  
     doy1 = date/10 ;  
     com1 = year/100;   
     com2 = com1%10; 
     com3 = com1/10;  
     dom  = month%10 ;  
     dom1 = month/10;   
     
      if(cod2 == doy1 && cod3 == doy && com2 == dom1 && com3 == dom){
         if( year > 1000 && year < 9999 ){
           if(year > 2000 && month <= 12){
           if(month == 1|| month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
               if(date <= 31 || date >= 1 ){
                   printf("Future Palindrome");
               }
               else{
                   printf("Invalid date");
               }}
           if(month == 2){
               if(year%4 == 0){
                   if(date <= 29 && date >= 1){
                       printf("Future Palindrome");
                   }
                   else{
                       printf("Invalid date");
                   }}
                else{
                    if(date <= 28 && date >= 1){
                       printf("Future Palindrome");
                   }
                   else{
                       printf("Invalid date");
                   }
                }
               }
           }
           else{
               if(date <= 30 || date >= 1 ){
                   printf("Future Palindrome");
               }
               else{
                   printf("Invalid date");
               }
           }
           }
               
     
      else{
         printf("Invald year");
      }}
         else if(year < 2000 && month <= 12){
          if(month == 1|| month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
              if(date <= 31 || date >= 1 ){
                  printf("Future Palindrome");
              }
              else{
                  printf("Invalid date");
              }
          if(month == 2){
              if(year%4 == 0){
                  if(date <= 29 && date >= 1){
                      printf("Future Palindrome");
                  }
                  else{
                      printf("Invalid date");
                  }}
                else{
                    if(date <= 28 && date >= 1){
                      printf("Future Palindrome");
                  }
                  else{
                      printf("Invalid date");
                  }
                }
              }
          }
          else{
              if(date <= 30 || date >= 1 ){
                  printf("Future Palindrome");
              }
              else{
                  printf("Invalid date");
              }
          }
      }
    
  else{
         printf("Not Palindrome Date");
     }  
    return 0;}
