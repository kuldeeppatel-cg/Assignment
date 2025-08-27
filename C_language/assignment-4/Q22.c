// Q22 Write a program to input a char (digit '0'–'9'), convert to int, then:
// If prime digit (2, 3, 5, 7): "Prime Digit"
// Else if even: "Even Non-Prime"
// Else: "Odd Non-Prime"
#include <stdio.h>
int main()
 { char dig;
   scanf("%c",&dig);
   if(dig > 48 && dig < 58){
       if(dig == 50 || dig == 51 || dig == 53 || dig == 55){
           printf("Prime Digit");
       }
       else if(dig%2 == 0){
           printf("Even Non-Prime");
       }
       else{
           printf("Odd Non-Prime");
       }
   }
    return 0;
}
