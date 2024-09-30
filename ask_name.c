#include "common_defs.h"

int main(void){
    printf("What is your name: ");
    char name[30];
    scanf("%s", name);
    printf("Your name is %s\n", name);
}