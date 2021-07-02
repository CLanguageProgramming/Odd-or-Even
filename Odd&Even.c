#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number:- ");
    scanf("%d", &a);
    getchar();
    switch (a % 2)
    {
    default:
        printf("\nOdd!!!");
        getchar();
        break;
        
    case 0:
        printf("\nEven!!!");
        getchar();
        break;
    }
}