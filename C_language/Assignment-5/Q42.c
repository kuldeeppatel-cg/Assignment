// 42. Border Rectangle (Stars)
// Input: rows = 4, cols = 7

// *******
// *     *
// *     *
// *******
#include <stdio.h>

int main()
{ int c,r;
  printf("Enter rows => ");
  scanf("%d",&r);
  printf("Enter cols => ");
  scanf("%d",&c);
  for(int i=1;i<=r;i++){
      for(int j=1;j<=c;j++){
          if(i==1 ||j==1|| j==c ||i==r){
              printf("*");
          }
          else{
              printf(" ");
          }
      }
      printf("\n");
  }

    return 0;
}