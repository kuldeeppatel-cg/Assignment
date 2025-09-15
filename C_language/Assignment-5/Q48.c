// 48. Continuous Numbers (Square)
// Input: n = 4

// 1  2  3  4
// 5  6  7  8
// 9 10 11 12
// 13 14 15 16


#include <stdio.h>

int main()
{ int n,count=1;
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
          if(count>9){
          printf(" ");}
          else{
              printf("  ");
          }
          printf("%d",count);
          count +=1;
      }
      printf("\n");
  }
    return 0;
}