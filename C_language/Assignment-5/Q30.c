// 30. Diamond Pattern (Alphabets Palindrome)
// Input: n = 5

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
//  ABCDCBA
//   ABCBA
//    ABA
//     A

#include <stdio.h>

int main()
{	int n,revese;
	scanf("%d",&n);
	for(int i=1; i<=n-1; i++) {
		for(int l=n; l>i; l--) {
			printf(" ");
		}
		for(int j=65; j<=i+64; j++) {
			printf("%c",j);
			revese = j;
		}
		for(int k=revese-1; k>64; k--) {
			printf("%c",k);
		}
		printf("\n");
	}
 for(int i=n;i>=1;i--){
        for(int l=n; l>i; l--){
            printf(" ");
        }
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