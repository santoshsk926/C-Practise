#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 2 integers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("%d%d",a,b);
}
