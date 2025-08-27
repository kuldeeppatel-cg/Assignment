#include <stdio.h>
int main(){
    float ph;
    scanf("%f",&ph);
    if(ph < 7){
        printf("Acitic");
    }
    else if(ph == 7){
        printf("Neutral");
    }
    else if(ph > 7 && ph <= 10){
        printf("Basic");
    }
    else if(ph > 7){
        printf("Strongly basic");
    }
    return 0;
}