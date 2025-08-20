#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter farenheit :");
    scanf("%f", &a);
    c=5/9.0;
    d=32.0;
    b=c*(a-32);
    printf("temp in celcius is %f", b); 
    return 0;
}         