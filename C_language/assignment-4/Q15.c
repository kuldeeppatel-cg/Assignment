// Write a program to input a float for fuel efficiency (km/liter) and distance (km), calculate fuel needed. Then:
// If distance > 500:
// Efficiency < 10: "Inefficient Long Trip"
// Else: "Efficient"
// If distance <= 500:
// Fuel > 50: "Excessive"
// Else: "Moderate"
#include <stdio.h>

int main()
{ float mile,dis;
  scanf("%f %f",&mile,&dis);
  if(dis > 500 ){
      if(mile < 10){
      printf("Inefficient Long Trip");
      }
      else{
      printf("Efficient");
  }}
  else{
      if(mile > 50){
          printf("Excessive");
      }
      else{
          printf("Moderate");
      }
  }
    return 0;
}