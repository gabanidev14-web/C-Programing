#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter bytes :");
    scanf("%f", &a);
    b=a/1000;
    printf("kilo byte is%f", b);
    c=a/1000000;
    printf("mega byte is%f", c);
    d=a/1000000000;
    printf("giga byte is%f", d);
}
