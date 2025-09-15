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