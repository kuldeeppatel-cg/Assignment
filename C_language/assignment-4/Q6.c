#include <stdio.h>
#include <math.h>
int main(){
     float len,bre,dia;
     scanf("%f %f %f",&len,&bre,&dia);
     float py = sqrt(bre*bre+len*len);
     printf("%f",py);
     if(len == bre && dia == py || dia+0.1 == py|| dia-0.1 == py){
         printf("Square");
     }
     else if(len != bre && dia == py|| dia+0.1 == py|| dia-0.1 == py){
         printf("Rectangle");
     }
     else{
         printf("Invalide");
     }
    return 0;
}