// 46. Triangle with Odd Numbers
// Input: n = 5

// 1
// 3 5
// 7 9 11
// 13 15 17 19
// 21 23 25 27 29


#include <stdio.h>

int main()
{ int n,count=1;
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