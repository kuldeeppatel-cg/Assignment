// 43. Border Rectangle (Numbers)
// Input: rows = 4, cols = 7

// 1234567
// 1     7
// 1     7
// 1234567
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
              printf("%d",j);
          }
          else{
              printf(" ");
          }
      }
      printf("\n");
  }

    return 0;
}