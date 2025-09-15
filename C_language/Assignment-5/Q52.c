// 52. 0–1 Square (Checkerboard)
// Input: n = 5

// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1


#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  int count=1;
  for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
          if((i+j)%2 == 0){
              printf(" 1");
          }
         else{
             printf(" 0");
         }
          count +=1;
      }
      printf("\n");
  }
    return 0;
}