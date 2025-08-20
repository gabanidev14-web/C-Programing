#include<stdio.h>
int main()
{
    float g,a,d,s;
    printf("enter gross salary:");
    scanf("%f", &g);
    a=g/10;
    d=g*3/100;
    s=g+a-d;
    printf("net salary is:%f", s);
    return 0;

}