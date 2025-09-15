// 23. Right-Aligned Inverted Triangle (Alphabets)
// Input: n = 5

// A B C D E
//   A B C D
//     A B C
//       A B
//         A


#include <stdio.h>

int main()
{ int n,count=65;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
      for(int k=0; k<=i;k++){
          printf(" ");
      }
      for(int j=n; j>i;j--){
          printf("%c",count++);
      }
      printf("\n");
      count=65;
  }
    return 0;
}