// 18. Inverted Right-Angled Triangle (Alphabets)
// Input: n = 5

// A B C D E
// A B C D
// A B C
// A B
// A 

#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  for(int i=n; i>0; i--){
      for(int j=65; j<i+65; j++){
          printf("%c",j);
      }
      printf("\n");
  }
    return 0;
}