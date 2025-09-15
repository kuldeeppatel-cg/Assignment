// 20. Continuous Alphabet Triangle
// Input: n = 6

// A
// B C
// D E F
// G H I J
// K L M N O
// P Q R S T U

#include <stdio.h>

int main()
{ int n,count=65;
  scanf("%d",&n);
  for(int i=0; i<=n; i++){
      for(int j=1; j<=i; j++){
          printf(" %c",count++);
          
      } 
     
      printf("\n");
  }
    return 0;
}