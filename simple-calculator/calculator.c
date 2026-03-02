#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() 
{
int choice;
int a, b;

while (1)
{

    printf(" Simple Calculator \n");
    printf("1. Add\n");
    printf("2. Substract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("0. Quit\n");
    scanf("%d", &choice);

   if (choice == 0)
    {
        printf("Bye!\n");
        return (0);
    }
    else if(choice < 0 || choice > 4)  
    {
        printf("Invalid choice\n");
    }
    else if (choice ==1)
    {
        printf("A: ");
        scanf("%d", &a);

        printf("B: ");
        scanf("%d", &b);

        printf("Result: %d\n", a + b);

    }
}
}
