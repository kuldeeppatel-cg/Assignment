// 49. Continuous Alphabets (Square)
// Input: n = 4

// A B C D
// E F G H
// I J K L
// M N O P


#include <stdio.h>

int main()
{ int n,count=65;
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
          printf(" %c",count);
          count +=1;
      }
      printf("\n");
  }
    return 0;
}