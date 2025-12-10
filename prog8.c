// C program to check whether a number is even or odd
#include <stdio.h>
int main()
{
    int num;
    printf("Input a Number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an Even Number", num);
    }
    else
    {
        printf("%d is an Odd Number", num);
    }
}

//output
// Input a Number : 7
// 7 is an Odd Number
// Input a Number : 12
// 12 is an Even Number