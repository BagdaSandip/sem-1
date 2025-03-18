// Print simple interest.
#include <stdio.h>
void main()
{
    int p, r, t;
    float SI;
    printf("enter the principal:");
    scanf("%d", &p);
    printf("enter the roi:");
    scanf("%d", &r);
    printf("enter thr time period:");
    scanf("%d", &t);
    SI = ((p * r * t) / 100);
    printf("the simple interest is%f", SI);
}