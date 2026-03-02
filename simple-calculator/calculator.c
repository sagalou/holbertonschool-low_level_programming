#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() 
{
int simpleCalculator;

    printf(" Simple Calculator \n");
    printf("1. Add\n");
    printf("2. Substract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("0. Quit\n");

    printf("Bye!\n");
    
    scanf("%d", &simpleCalculator);
    
    printf("\n");
    return 0;
}
