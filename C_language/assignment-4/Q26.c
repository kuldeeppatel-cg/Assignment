// Q26=>Write a program to input three floats (x, y, z) coordinates, compute distance from origin:
// == 0: "Origin"
// < 1: "Very Close"
// 1 – 10: "Near"
// > 10 and all coordinates > 0: "Same Octant Far"
// Else: "Different Octant"
#include <math.h>
#include <stdio.h>
int main()
{ float x,y,z;
  scanf("%f %f %f",&x,&y,&z);
  float dis = sqrt(x*x+y*y+z*z);
  if(dis == 0){
      printf("Origin");
  }
  else if(dis < 1){
      printf("Very Close");
  }
  else if(dis > 1 && dis < 10){
      printf("Near");
  }
  else if(dis > 10 && y>0 && x>0 && z>0){
      printf("Same Octant Far");
  }
  else{
      printf("Different Octant");
  }
    return 0;
}