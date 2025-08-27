// Q34 .Write a program to input two chars (lowercase letters) and check if their ASCII difference is even:
// Both vowels: "Even Vowel Pair"
// Both consonants: "Even Cons Pair"
// Mixed: "Even Mixed" Else (odd difference) equivalents.
#include <stdio.h>
int main()
{ char ch1,ch2;
  scanf("%c %c",&ch1,&ch2);
  int diff = ch1 - ch2;
 if(ch1 >= 97 && ch1 <= 122 && ch2 >= 97 && ch2 <= 122){
      if(diff%2 == 0){
          if(ch1==97 && ch1 == 101 && ch1 == 105 && ch1 == 111 && ch1 ==117
           &&   ch2==97 && ch2 == 101 && ch2 == 105 && ch2 == 111 && ch2 ==117){
               printf("Even Vowel Pair");
           }
          else  if(ch1!=97 && ch1 != 101 && ch1 != 105 && ch1 != 111 && ch1 !=117
           &&   ch2!=97 && ch2 != 101 && ch2 != 105 && ch2 != 111 && ch2 !=117){
              printf("Even cons Pair");
          }
          else{
              printf("Even Mixed");
          }
      }
      else{
          printf("Odd difference equivalents");
      }
 }
 else{
     printf("Not enter input according to question");
 }  
  
  
    return 0;
}

