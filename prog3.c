#include <conio.h>
#include <stdio.h>
int main()
{
    int x, *px;
    px = &x;
    x = 5;
    printf("x = % d " , x);
    printf("\naddress of x = % d", &x);
    printf("\naddress pointed by pointer = % u", px);
    printf("\naddress of the pointer = % u", &px);
    printf("\ncontent pointed by pointer = % d", *px);
}