// 9. Right-angled Triangle — Alphabets (increasing)
// Input example: n = 5

// A
// A B
// A B C
// A B C D
// A B C D E

#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  for(int i=0; i<=n;i++){
      for(int j=65; j<=i+64;j++){
          printf("%c",j);
      }
      printf("\n");
  }
    return 0;
}