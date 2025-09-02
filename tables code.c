#include <stdio.h>
int main() 
{
    int num, i;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    i=1;
    // Print multiplication table
    printf("Multiplication table of %d:\n", num);
    while (i <= 10) 
         { 
        printf("%d x %d = %d\n", num, i,        num * i);
        i++;
         }

    return 0;
}
