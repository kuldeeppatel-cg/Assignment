// 55. Hollow Diamond (Numbers Palindrome)
// Input: n = 4

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
//   1 2 3 2 1
//     1 2 1
//       1


#include <stdio.h>

int main()
{ int n,revese;
  scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=i; k<n;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
            revese = j;
        }
        for(int l=revese-1;l>0;l--){
            printf("%d",l);
        }
        printf("\n");
    }
     for(int i=n-1;i>=1;i--){
        for(int k=n; k>i;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
            revese = j;
        }
        for(int l=revese-1;l>0;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}

 