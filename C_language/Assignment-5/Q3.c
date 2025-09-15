
#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  for(int i=65;i<=n+64;i++){
      printf("%c\t",i);
  }
    return 0;
}