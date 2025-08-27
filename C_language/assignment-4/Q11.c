#include <stdio.h>
 int main(){
 float num1,num2,num3,diff1,diff2;
  scanf("%f %f %f",&num1,&num2,&num3);
  diff1 = num2-num1;
  diff2 = num3-num2;
  if(diff2 == diff1){
      if(diff2 > 10){
          printf(" Large gap");
      }
      else if(diff2 == 0){
          printf("Constant");
      }
      else{
          printf("Small Gap");
      }
  }
  else{
      printf("not a progression");
  }
 
    return 0;
}