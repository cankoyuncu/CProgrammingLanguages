#include <stdio.h>

main(){
    char name[50];
    char password[50];
    char loginName[]={"Can"};
    char loginPassword[]={"123123"};

    printf("Please enter the name: ");
    scanf("%s", &name);

    printf("Please enter the password: ");
    scanf("%s", &password);

    if (strcmp(name,loginName)==0 && strcmp(password,loginPassword)==0){
        printf("User info is match!");
    }
    else{
        printf("User info is dont match!");
    }
}