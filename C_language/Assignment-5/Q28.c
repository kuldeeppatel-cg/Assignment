// 28. Inverted Pyramid (Alphabets)
// Input: n = 5

// A B C D E F G H I
//   A B C D E F G
//     A B C D E
//       A B C
//         A

#include <stdio.h>
int main()
{ int n;
  scanf("%d",&n);
  for(int i=n; i>=0;i--){
      for(int k=n; k>i; k--){
          printf(" ");
      }
      for(int j=65; j<i*2+64;j++){
          printf("%c",j);
      }
      printf("\n");
  }
    return 0;
}