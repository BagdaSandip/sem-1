// print area of triangle.
#include <stdio.h>
void main()
{
    int height, base;
    float area;
    printf("enter the height;");
    scanf("%d", &height);
    printf("enter the base:");
    scanf("%d", &base);
    area = ((height * base) / 2);
    printf("the area of triangle is%f", area);
}
