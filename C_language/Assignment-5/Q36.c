// 36. Left-Aligned Triangle (Alphabets)
// Input: n = 5

// A
//  AB
//   ABC
//    ABCD
//     ABCDE

#include <stdio.h>

int main()
{	int n;
	scanf("%d",&n);
    for(int i=1;i<=n;i++){
      for(int k=1; k<i;k++){
          printf(" ");
      }
      for(int j=65; j<=i+64;j++){
          printf("%c",j);
      }
      printf("\n");
    }
	return 0;
}