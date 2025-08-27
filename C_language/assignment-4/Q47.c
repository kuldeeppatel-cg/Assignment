// Q47 Write a program to input a char (A–Z), check position (A=1) prime:
// Prime vowel: "Prime Vowel"
// Prime consonant: "Prime Consonant"
// Non-prime vowel/consonant equivalents.
#include <stdio.h>
#include <stdbool.h>
int main(){
 char alph;
  int upd;
  scanf("%c",&alph);
  upd = alph - 64;
  bool check = true;
     for(int i =2; i < upd; i++){
         if(upd%i == 0){
             check = false;
             break;
         }
     }
   if(upd >= 1 && upd <= 26){     
     if(check == true){
      if( upd == 5  ){
          printf("Prime Vowel");}
          else{
              printf("Prime Consonant");
          }
      }
  else{
      printf("Non-prime vowel/Consonant");
  }}
  else{
      printf("Enter Wrong Character according to Question");
  }
   

    return 0;
}