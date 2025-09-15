// 50. Reverse Continuous Triangle (Numbers)
// Input: n = 5

// 15
// 14 13
// 12 11 10
// 9  8  7  6
// 5  4  3  2  1


#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  int count=n*(n+1)/2;
  for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
          if(count<10){
              printf(" ");
          }
          printf(" %d",count);
          count -=1;
      }
      printf("\n");
  }
    return 0;
}