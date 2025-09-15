// 60. Multiplication Table Square
// Input: n = 5

// 1  2  3  4  5
// 2  4  6  8 10
// 3  6  9 12 15
// 4  8 12 16 20
// 5 10 15 20 25


#include <stdio.h>

int main()
{ int n,revese;
  scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i*j < 10){
                printf("  ");
            }
            else{
                printf(" ");
            }
            printf("%d",i*j);
            
            }
        
        printf("\n");
    }
    return 0;
}

 