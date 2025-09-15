// 58. Cross with Numbers
// Input: n = 5

//   3
//   3
// 12345
//   3
//   3


#include <stdio.h>

int main()
{ int n,revese;
  scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((n+1)/2==j|| (n+1)/2==i){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

 