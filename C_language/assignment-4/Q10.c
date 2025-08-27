#include <stdio.h>
// #include <math.h>
int main()
{ float unit,bill,fir100,nex100,nex200;
  
  scanf("%f",&unit);
  fir100 = unit*5;
  nex100 = (100*5)+(unit-100)*7;
  nex200 = (100*5)+(200*7)+(unit-200)*10;
  if(unit>150){
       if(nex100 > 500 || nex200 >500 ){
      printf("High Consumption");
      }}
  else{
      printf("Normal");
  }
    return 0;
}