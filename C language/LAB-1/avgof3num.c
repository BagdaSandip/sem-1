// Print average of three numbers.  
#include<stdio.h>
void main(){
    int a,b,c;
    float avg;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf(" the average is: %f",avg);
}
