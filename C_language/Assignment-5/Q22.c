// 22. Right-Aligned Inverted Triangle (Numbers)
// Input: n = 5

// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1

// 22. Right-Aligned Inverted Triangle (Numbers)
// Input: n = 5

// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1

#include <stdio.h>

int main()
{ int n,count=1;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
      for(int k=0; k<=i;k++){
          printf(" ");
      }
      for(int j=n; j>i;j--){
          printf("%d",count++);
      }
      printf("\n");
      count=1;
  }
    return 0;
}