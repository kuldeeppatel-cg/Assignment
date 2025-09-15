// 35. Left-Aligned Triangle (Numbers)
// Input: n = 5

// 1
//  12
//   123
//    1234
//     12345

#include <stdio.h>

int main()
{	int n;
	scanf("%d",&n);
    for(int i=1;i<=n;i++){
      for(int k=1; k<i;k++){
          printf(" ");
      }
      for(int j=1; j<=i;j++){
          printf("%d",j);
      }
      printf("\n");
    }
	return 0;
}