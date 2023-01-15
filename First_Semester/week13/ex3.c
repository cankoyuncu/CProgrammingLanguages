#include <stdio.h>

void shifting(char[], int);
void simplifying(char[]);

int main(){
    int i=0;
    char array[]= "5552211221";
    // simplifying(array);
    printf("\n\n");
    puts(array);
    printf("\n\n");
    return 0;
}

void simplifying(char array[]){
    int i = 0;
    while(array[i]!='\0'){
        if(array[i]==array[i+1])
            shifting(array,i);
        else
             i+1;       
    }
}
void shifting(char a[], int i){
    for(;a[i]!='\0';i++)
        a[i]=a[i+1];
}