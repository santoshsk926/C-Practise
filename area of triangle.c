#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,s,area,temp;
    printf("enter 3 values");
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    temp=s*(s-a)*(s-b)*(s-c);
    area = pow(temp,1.0/2);
    printf("area is %d:",area);
}
