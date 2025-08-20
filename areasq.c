#include<stdio.h>
int main()
{
    float l,a,p;
    printf("enter length of square:");
    scanf("%f", &l);
    a=l*l;
    p=4*l;
    printf("area is:%f", a);
    printf("perimeter is:%f", p);
    return 0;

}