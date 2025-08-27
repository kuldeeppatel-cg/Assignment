#include <stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num2,&num2,num3);
    int pro = num1*num2*num3;
    if(pro % 6 == 0 && pro % 9 != 0){
        printf("Special");
    }
    else{
        printf("Normal");
    }
    return 0;
}