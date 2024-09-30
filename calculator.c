#include "common_defs.h"

int main(void){
    printf("Num 1: ");
    long num1;
    scanf("%d", &num1);
    
    printf("Num 2: ");
    long num2;
    scanf("%d", &num2);

    printf("The sum of %d + %d is %d\n", num1, num2, num1 + num2);
}