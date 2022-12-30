#include<stdio.h>

main(){
   char sentence[100];
      int i = 0;
      puts("Enter the sentence: ");
      gets(sentence);
      while(sentence[i] != '\0' ){
         if(sentence[i] >= 'a' && sentence[i] <= 'z' )
            sentence[i] -= 32;
         i++;
      }
      puts(sentence);
}


