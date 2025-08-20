#include<stdio.h>
int main()
{
    float h,l,a;
    printf("enter length of triangle:");
    scanf("%f", &l);
    printf("enter heigth of triangle:");
    scanf("%f", &h);
    a=h*l/2;
    printf("area is:%f", a);
    return 0;

}