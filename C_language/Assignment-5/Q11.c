// 11. Right-Aligned Triangle — Numbers
// Input example: `n = 5`
//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  for(int i=0; i<=n;i++){
      for(int k=n; k>i; k--){
          printf(" ");
      }
      for(int j=1; j<=i;j++){
          printf("%d",j);
      }
      printf("\n");
  }
    return 0;
}