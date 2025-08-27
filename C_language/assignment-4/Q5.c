#include <stdio.h>
#include <math.h>
int main(){
     int cor1,cor2;
     scanf("%d %d",&cor1,&cor2);
     int dis = sqrt(cor1*cor1+cor2*cor2);
     if(dis <= 5){
         printf("Close");
     }
     else if(dis > 5 && dis < 15){
         printf("Medium");
     }
     else{
         printf("Far");
     }
    return 0;
}