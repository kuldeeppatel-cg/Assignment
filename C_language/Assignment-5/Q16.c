// 16. Inverted Right-Angled Triangle (Stars)
// Input: n = 5

// *****
// ****
// ***
// **
// *

#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  for(int i=0; i<=n;i++){
      for(int k=n; k>i; k--){
          printf("  ");
      }
      for(int j=65; j<i*2+64;j++){
          printf("%c ",j);
      }
      printf("\n");
  }
    return 0;
}