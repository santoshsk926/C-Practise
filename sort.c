#include<stdio.h>
#include<conio.h>
#define SIZE 100
void main()
{
    int a[SIZE],i,j,n,temp=0;
    printf("Enter number of elements to sort:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
             {
                temp = a[i];
                a[i] = a[j];
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
