#include<stdio.h>
#include<stdlib.h>

int lad(int p, int n)
{
    int *i = p;
    for(i=0; i<n; i=i+4)
    {
        printf("%d\n", *i);
    }
    return 0;
}

int main()
{
    int ar[5], i;
    printf("Enter 5 elements:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &ar[i]);
    }

    lad(ar[], 5);
    return 0;
}