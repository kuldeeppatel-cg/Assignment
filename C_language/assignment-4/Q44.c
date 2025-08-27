// Q44 Write a program to input two integers as Fibonacci start, generate next 3 numbers manually, then:
// Sum > 100: "Growing Fast"
// Else: "Slow Growth"


#include <stdio.h>

int main()
{ int num,num1,fib,fib1,fib2,sum;
  scanf("%d %d",&num,&num1);
  fib = num1 + num;
  fib1 = fib + num1;
  fib2 = fib1 + fib;
  sum = fib + fib1 + fib2;
  if(sum > 100){
      printf("Growing Fast");
  }
  else{
      printf("Slow Growth");
  }
    return 0;
}