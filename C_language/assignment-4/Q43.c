// Q43 .Write a program to input last 4 digits of a phone number, check:
// Sum even & product > 100: "Lucky Extension"
// Sum odd & product < 50: "Unlucky"
// Other cases accordingly
#include <stdio.h>

 
  int main()
 {  int mobile_no,i,dig,pro;
    scanf("%d",&mobile_no);
  
    int sum = 0;
    pro = 1;
  if(mobile_no >= 1000 && mobile_no <= 9999){
    for(i=10;i >= 10;i=10){
       dig = mobile_no%i;
       mobile_no = mobile_no/i;
       sum = sum + dig;
       pro = pro * dig;
       if(mobile_no == 0){
           break;
       }
    }
    if(sum%2 ==0){
      if(sum > 100 && pro > 100){
          printf("Lucky Extension");
      }
        else{
            printf("not Lucky Extension");
        }
    }
      if(sum%2 == 1){
          if(sum <50 && pro < 50){
              printf("Unlucky");
          }
      }
  }
  else{
      printf("Enter mobile last 4 digit only");
  }
 
    
   return 0;  }
