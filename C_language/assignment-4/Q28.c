// Q28. Write a program to input a float for angle in degrees (0–360) and classify:
// < 90: "Acute"
// If < 45: "Sharp Acute"
// == 90: "Right"
// 90 – 180: "Obtuse"
// > 180: "Reflex"
#include <stdio.h>
int main() {
    float deg;
    scanf("%f",&deg);
    if(deg < 90){
        if(deg < 45){
            printf("Sharp Acute");
        }
        else{
            printf("Acute");
        }
    }
    else if(deg == 90){
        printf("Right angle");
    }
    else if(deg > 90 && deg < 180){
        printf("Obtuse angle");
    }
    else{
        printf("Reflex angle");
    }
    return 0;
}

