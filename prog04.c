//program to convert temperature from Celsius to Fahrenheit
#include <stdio.h>
int main()
{
    float tempC, tempF;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &tempC);

    // conversion
    tempF = (tempC * 9 / 5) + 32;
    printf("Temperature in Fahrenheit is %.2f", tempF);
    return 0;
}

//output
// Enter temperature in Celsius: 25
// Temperature in Fahrenheit is 77.00
