// 25. Palindrome Triangle (Alphabets)
// Input: n = 5

// A
// A B A
// A B C B A
// A B C D C B A
// A B C D E D C B A


#include <stdio.h>

int main()
{ int n,revese;
  scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=65;j<=i+64;j++){
            printf("%c",j);
            revese = j;
        }
        for(int k=revese-1;k>64;k--){
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}