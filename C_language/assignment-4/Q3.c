#include <stdio.h>
int main(){
    int num1,num2,num3,num4;
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    if(num1 > num2){
        if(num1 > num3 ){
            if(num1 < num4){
                printf("Num1 is Second Largest");
            }
            else{
                printf("Num4 is Second Largest");
            }
        }
        else{
            if(num3 > num4){
                printf("Num4 is Second Largest");
            }
            else{
                printf("Num3 is Second Largest");
            }
        }
        else if(num2 > num3){
            if(num2 < num4){
                printf("num2 is Second Largest");
            }
            else{
                printf("num4 is Second Largest");
            }
        }
        else if(num4 > num3){
            printf("num2 is Second Largest");
        }
        else{
            printf("num4 is Second Largest");
        }
    }
    return 0;
}