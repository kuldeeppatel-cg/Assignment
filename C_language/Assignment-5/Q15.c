// 15. Full Pyramid — Alphabets (centered)
// Input example: `n = 5`
//         A
//       A B C
//     A B C D E
//   A B C D E F G
// A B C D E F G H I

#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  for(int i=0; i<=n;i++){
      for(int k=n; k>i; k--){
          printf("  ");
      }
      for(int j=65; j<i*2+64;j++){
          printf("%c ",j);
      }
      printf("\n");
  }
    return 0;
}