#include<stdio.h>
#include<conio.h>
#define size 100
void main()
{
    int a[10],i,j,n,temp=0;
    printf("Enter number of elements to sort:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[n]);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]<a[i+1])
             {
                temp = a[i];
                a[i] = a[i+1];
                a[j] = temp;
              }
        }
    }
    printf("elements in the sorted order is:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
