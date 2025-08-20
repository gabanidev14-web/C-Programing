#include<stdio.h>
int main()
{
    float l,a,b,p;
    printf("enter length of rect:");
    scanf("%f", &l);
    printf("enter breadth of rect:");
    scanf("%f", &b);
    a=l*b;
    p=2*(l+b);
    printf("area is:%f", a);
    printf("perimeter is:%f", p);
    return 0;

}