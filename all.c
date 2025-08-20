#include<stdio.h>
int main()
 {
    int a,b,c,d,e,f;
    printf("enter first no :\n");
    scanf("%d", &a);
    printf("enter second no :\n");
    scanf("%d", &b);
    c = a+b;
    d = a-b;
    e = a*b;
    f = a/b;

    printf("Addition of %d and %d is :%d \n",a,b,c);
    printf("Subtraction of %d and %d is :%d \n",a,b,d);
    printf("Multiplication of %d and %d is :%d \n",a,b,e);
    printf("Division of %d and %d is :%d \n",a,b,f);
 }