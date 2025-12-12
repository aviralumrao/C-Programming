// C program to find the greatest among three numbers
#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Input Three Numbers : ");
    scanf("%d%d%d", &A, &B, &C);

    if (A > B)
    {
        if (A > C)
        {
            printf("%d is the greatest number.", A);
        }
        else
        {
            printf("%d is the greatest number.", C);
        }
    }
    else
    {
        if (B > C)
        {
            printf("%d is the greatest number.", B);
        }
        else
        {
            printf("%d is the greatest number.", C);
        }
    }
    return 0;
}

//output
// Input Three Numbers : 10 20 15
// 20 is the greatest number.