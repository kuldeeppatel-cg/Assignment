// 17. Inverted Right-Angled Triangle (Numbers)
// Input: n = 5

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  for(int i=n; i>0;i--){
      for(int j=1; j<=i;j++){
          printf("%d",j);
      }
      printf("\n");
  }
    return 0;
}