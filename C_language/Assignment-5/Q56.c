// 56. Concentric Square (Stars)
// Input: n = 5

// *****
// *   *
// * * *
// *   *
// *****


#include <stdio.h>

int main()
{ int n,revese;
  scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j == 1 || j == n || i == (n+1)/2 && j == (n+1)/2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

 