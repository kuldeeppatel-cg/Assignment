// 14. Full Pyramid — Numbers (centered)
// Input example: `n = 5`
//         1
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9

#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  for(int i=0; i<=n;i++){
      for(int k=n; k>i; k--){
          printf("  ");
      }
      for(int j=1; j<i*2;j++){
          printf("%d ",j);
      }
      printf("\n");
  }
    return 0;
}