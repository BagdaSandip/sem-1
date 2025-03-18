// Print temperature from Fahrenheit to Celsius.
#include <stdio.h>
void main()
{
    int f, c;
    printf("enter the fahrenheit:");
    scanf("%d", &f);
    c = (((f - 32) * 5)) / 9;
    printf("the temperature is %d", c);
}