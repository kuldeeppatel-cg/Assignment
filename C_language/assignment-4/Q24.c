// Q24 Write a program to input two integers for numerator and denominator, check:
// Fraction > 1: "Improper"
// == 1: "Equal"
// < 1: "Proper" If improper:
// If convertible to mixed number without remainder: "Improper Whole"
// Else: "Improper Fraction"

#include <stdio.h>
#include <math.h>
int main()
{ int nume,deno;
  scanf("%d %d",&nume,&deno);
  if(nume % deno == 0 && nume != deno){
     printf("Improper Whole");  
  }
  else if(nume == deno){
      printf("Equal");
  }
  else if(nume/deno < 1){
      printf("Proper");
  }
  else if(nume/deno > 1){
      printf("Improper");
  }
  else{
      printf("Improper fraction");
  }
    return 0;
}