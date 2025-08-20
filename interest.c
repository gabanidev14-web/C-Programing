#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter principal amount:");
    scanf("%f", &a);
    printf("enter rate:");
    scanf("%f", &b);
    printf("enter time period:");
    scanf("%f", &c);
    d=a*b*c/100;
    printf("interest is: %f", d);
    return 0;
}       