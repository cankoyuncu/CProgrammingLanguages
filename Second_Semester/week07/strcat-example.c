#include <stdio.h>
#include <string.h>

int main(){
    char src[50];
    dest[50];
    strcpy(src, "this is source");
    strcpy(dest, "this is destination");
    strcat(dest, src);
    printf("Final destination string: |%s|", dest);
    return(0);
}