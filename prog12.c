// C program to find the sum of all numbers upto a given number
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Input the number upto the numbers be added : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("Sum of all the numbers upto %d is %d", num, sum);
    return 0;
}

//output
// Input the number upto the numbers be added : 10
// Sum of all the numbers upto 10 is 55
