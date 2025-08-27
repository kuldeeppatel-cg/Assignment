// Q16 Write a program to input three integers representing RGB 
// values (0–255 each) and check if the color is a shade of gray (R == G == B).
// If not gray:
// If R > G and R > B: "Warm"
// If B > R and B > G: "Cool"
// Else: "Neutral"

#include <stdio.h>
int main()
{ int R,G,B;
  scanf("%d %d %d",&R,&G,&B);
  if(R <= 255 && G <= 255 && B <= 255){
      if(R == G && B == R){
          printf("Gray");
      }
      else if(R > G && R > B){
          printf("Warm");
      }
       else if(B > R && B > G){
          printf("Cool");
      }
      else{
          printf("Neutral");
      }
  }
  else{
      printf("Not valid Input");
  }
    return 0;
}