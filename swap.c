#include<stdio.h>
int main()
{
    int a,b,t;
    printf("enter first value:");
    scanf("%d", &a);
    printf("enter second value:");
    scanf("%d", &b);
    t=a;
    a=b;
    b=t;
    printf("the values are %d %d", a,b);

}