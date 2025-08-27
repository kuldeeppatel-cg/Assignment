// Q41 .Write a program to input an operator (+, -, *, /) and two integers, perform operation if valid, then:
// Result > 100: "Large Result"
// Result < 0: "Negative"
// Else: "Moderate"
#include <stdio.h>

 
  int main()
 {  int num1,num2,res;
    char oper;
    scanf("%d %c %d",&num1,&oper,&num2);
    if(oper == '+'){
        res = num1 + num2;
    }
    else if(oper == '-'){
        res = num1 - num2;
    }
   else  if(oper == '*'){
        res = num1 * num2;
    }
    else if(oper == '/'){
        res = num1 / num2;
    }
    if(res > 100){
        printf("Large Result");}
        
    if(res < 0){
        printf("Negative");}
    
    if(res <= 100 && res >= 0){
        printf("Moderate");    
    }
    else{
        printf("Invalid");
    }
    
    
   return 0;  }