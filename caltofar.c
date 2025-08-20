#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter celsius :");
    scanf("%f", &a);
    c=9/5.0;
    d=32.0;
    b=a*c+d;
    printf("temp in farenheit is %f", b); 
    return 0;
}       