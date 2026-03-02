#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() 
{
int choice;

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
}
}

