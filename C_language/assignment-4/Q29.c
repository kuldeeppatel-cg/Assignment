// Q29. Write a program to input two integers m and n, compute binomial 
// coefficient C(m, n) (hardcode small cases, no loops), then:
// > 100: "Large Combo"
// == 1: "Edge"
// Else: "Small"
#include <stdio.h>
int fac(int re){
    int res = 1;
     
    for(int i=1;i <= re;i++){
        res = res*i;
    }
    return res;
}
int main() {
     int m,n;
     scanf("%d %d",&m,&n);
     int res1 = fac(m);
     int res2 = fac(n);
     int res3 = fac(m-n);
     int ans = res1/(res2*res3);
     if(ans > 100){
         printf("Large Combo");
     }
     else if(ans == 1){
         printf("Edge");
     }
     else{
         printf("Small");
     }
    return 0;
}

