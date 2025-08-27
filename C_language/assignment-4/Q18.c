// Q18.Write a program to input four integers and check if they can be paired into two pairs with equal sums. If yes:
// If the pairs are consecutive numbers: "Balanced Pairs"
// Else: "Unbalanced"

#include <stdio.h>

int main()
{ int nu1,nu2,nu3,nu4;
  scanf("%d %d %d %d",&nu1,&nu2,&nu3,&nu4);
  if(nu1+nu2==nu3+nu4 || nu1+nu3 == nu2+nu4 || nu1+nu4 == nu2+nu3){
      printf("Balanced Pairs");
  }
  else{
      printf("Unbalance pairs");
  }
    return 0;
}
