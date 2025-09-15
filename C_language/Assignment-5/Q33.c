// 33. Hollow Inverted Right-Angled Triangle (Stars)
// Input: n = 5

// *****
// *  *
// * *
// **
// *

#include <stdio.h>

int main()
{	int n;
	scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            if(i==j ||j==n|| i==1){
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