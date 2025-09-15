// 24. Palindrome Triangle (Numbers)
// Input: n = 5

// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1


#include <stdio.h>

int main()
{ int n,revese;
  scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
            revese = j;
        }
        for(int k=revese-1;k>0;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}