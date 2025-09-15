// 47. Triangle with Even Numbers
// Input: n = 5

// 2
// 4 6
// 8 10 12
// 14 16 18 20
// 22 24 26 28 30


#include <stdio.h>

int main()
{ int n,count=2;
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
          printf(" %d",count);
          count +=2;
      }
      printf("\n");
  }
    return 0;
}