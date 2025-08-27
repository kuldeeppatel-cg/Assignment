// Q39 Write a program to input radius and height of cylinder, compute volume:
// 1000: "Large Cylinder"
// 500–1000: "Medium Cylinder"
// < 500: "Small Cylinder" If height > 2 × radius: "Tall Variant"
#include <stdio.h>

 
  int main()
 { int radius,height,area;
   scanf("%d %d",&radius,&height);
  area = 3.14*radius*radius*height;
  if( height > 2*radius){
      printf("Tall Variant");
  }
  else if(area > 500 && area < 1000){
      printf("Medium");
  }
  else if(area > 1000){
      printf("Larger Cylinder");
  }
  else{
      printf("Small Cylinder");
  }
return 0;}