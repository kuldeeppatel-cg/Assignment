// 7. Right-angled Triangle — Stars (increasing)
// Input example: n = 5

// *
// **
// ***
// ****
// *****

#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
     for(int j=0;j<=i;j++){
         printf("*");
     }
     printf("\n");
  }
    return 0;
}