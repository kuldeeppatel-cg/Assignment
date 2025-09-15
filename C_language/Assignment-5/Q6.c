// 6. Square of Alphabets (row-wise)
// Input example: n = 4

// A B C D
// A B C D
// A B C D
// A B C D

#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
     for(int j=65;j<=n+64;j++){
         printf("%c\t",j);
     }
     printf("\n");
  }
    return 0;
}