#include <stdio.h>
void main()
{
    int a = 10, *ptr;
    ptr = &a;
    printf("Address of variable a = %u\n", ptr);
    printf("Value of variable a = %d\n", *ptr);
    printf("Address of variable ptr = %u\n", &ptr);
    printf("Val a = %d\n", ptr);
}