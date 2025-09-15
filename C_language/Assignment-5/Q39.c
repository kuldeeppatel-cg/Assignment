// 39. Reverse Left-Aligned Triangle (Alphabets)
// Input: n = 5

// ABCDE
//  ABCD
//   ABC
//    AB
//     A

#include <stdio.h>

int main()
{	int n;
	scanf("%d",&n);
    for(int i=n;i>=0;i--){
      for(int k=n; k>=i;k--){
          printf(" ");
      }
      for(int j=65; j<=i+64;j++){
          printf("%c",j);
      }
      printf("\n");
    }
	return 0;
}