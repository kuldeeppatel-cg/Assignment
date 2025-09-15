// 57. Concentric Square (Numbers)
// Input: n = 5

// 11111
// 12221
// 12321
// 12221
// 11111


#include <stdio.h>

int main()
{ int n,revese;
  scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j == 1 || j == n ){
                printf("1");
            }
            else if( i == (n+1)/2 && j == (n+1)/2){
                printf("3");
            }
            else{
                printf("2");
            }
        }
        printf("\n");
    }
    return 0;
}

 