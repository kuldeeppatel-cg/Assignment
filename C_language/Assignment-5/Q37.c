// 37. Reverse Left-Aligned Triangle (Stars)
// Input: n = 5

// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>

int main()
{	int n;
	scanf("%d",&n);
    for(int i=n;i>=0;i--){
      for(int k=n; k>=i;k--){
          printf(" ");
      }
      for(int j=1; j<=i;j++){
          printf("*");
      }
      printf("\n");
    }
	return 0;
}