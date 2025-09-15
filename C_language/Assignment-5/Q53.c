// 53. Pyramid with Continuous Numbers
// Input: n = 4

//          1
//       2  3  4
//    5  6  7  8  9
// 10 11 12 13 14 15 16


#include <stdio.h>

int main()
{ int n;
  scanf("%d",&n);
  int count=1,loop = 1;
  for(int i=1; i<=n; i++){
      for(int k=i; k<=n; k++){
           printf(" ");
      }
      for(int j=1; j<=loop; j++){
          if(count<10){
              printf(" ");
          }
          if(count==1){
            printf(" ");
          }
         printf("%d",count);
          count +=1;
          
      }
      loop += 2;
      printf("\n");
  }
    return 0;
}