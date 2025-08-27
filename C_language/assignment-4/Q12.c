// Q12. Write a program to input an integer (4-digit) representing a time in HHMM format (e.g., 0930). 
// Extract hours and minutes using division and modulus:
// Hours < 12: "AM"
// Hours >= 12: "PM" Also:
// Minutes == 0: "On the Hour"
// Minutes > 30: "Past Half"
// Else: "Before Half"

#include <stdio.h>

int main()
{ int tim,hour,min;
  scanf("%d",&tim);
  hour = tim/100;
  min =  tim%100;
  if(hour < 24 && hour >= 0 && min >=0 && min < 60){
    if(hour < 12){
      if(min == 0){
          printf("AM  On the Hour");
      }
      else if(min > 30){
          printf("AM Past Half");
      }
      else{
          printf("AM Before Half");
      }}
   else {
      if(min == 0){
          printf("PM  On the Hour");
      }
      else if(min > 30){
          printf("PM Past Half");
      }
      else{
          printf("PM Before Half");
      }
  }
  }
  else{
      printf("Invalid time");
  }
 
    return 0;
}