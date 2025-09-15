// 41. Inverted Centered Hollow Triangle (Stars)
// Input: n = 5

// *********
//  *     *
//   *   *
//    * *
//     *
#include <stdio.h>

int main()
{ int n,turn=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
      for(int j=1;j<=n*2-1;j++){
          turn += 1;
          if(i==1||turn==i||turn == n*2-i){
              printf("*");
          }
          else{
              printf(" ");
          }
         
      }
      printf("\n");
      turn = 0;
  }

    return 0;
}