#include <stdio.h>
#include <math.h>
int main(){
     int mar1,mar2,mar3,mar4,mar5,avg;
     scanf("%d %d %d %d %d",&mar1,&mar2,&mar3,&mar4,&mar5);
     avg = (mar1+mar2+mar3+mar4+mar5)/5;
     if(avg >= 90){
         printf("Outstanding");
     }
     else if(avg > 70 && mar1>50 && mar2 > 50 && mar3>50 && mar4 > 50 && mar5 > 50){
         printf("Consistent");
     }
     else if(avg >= 50){
         printf("Passable");
     }
     else{
         printf("Needs Improvement");
     }
    return 0;
}