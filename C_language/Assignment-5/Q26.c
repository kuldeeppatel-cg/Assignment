// 26. Inverted Pyramid (Stars)
// Input: n = 5

// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>
int main()
{ int n;
  scanf("%d",&n);
  for(int i=n-1; i>=0;i--){
      for(int k=n; k>i; k--){
          printf(" ");
      }
      for(int j=i*2; j>=0;j--){
          printf("*");
      }
      printf("\n");
  }
    return 0;
}