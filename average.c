#include<stdio.h>
int main()
{
    float p,c,m,t,a;
    printf("enter physics marks:");
    scanf("%f", &p);
    printf("enter chemistry marks:");
    scanf("%f", &c);
    printf("enter mathematics marks:");
    scanf("%f",&m);
    t=p+c+m;
    a=t/3;
    printf("total marks are:%f", t);
    printf("average is:%f", a);
    return 0;
    
}