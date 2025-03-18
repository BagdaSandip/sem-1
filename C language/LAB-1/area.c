//print area of circle.
#include<stdio.h>
void main(){
    int r;
    float area,pie=3.14;
    printf("enter the radius:");
    scanf("%d",&r);
    area=pie*r*r;
    printf("area of circle is:%f",area);
}