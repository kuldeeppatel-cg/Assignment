// 38. Reverse Left-Aligned Triangle (Numbers)
// Input: n = 5

// 12345
//  1234
//   123
//    12
//     1

#include <stdio.h>

int main()
{	int n;
	scanf("%d",&n);
    for(int i=n;i>=0;i--){
      for(int k=n; k>=i;k--){
          printf(" ");
      }
      for(int j=1; j<=i;j++){
          printf("%d",j);
      }
      printf("\n");
    }
	return 0;
}