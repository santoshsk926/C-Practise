#include<stdio.h>
void main()
{
	int n, a[10], i;
	printf("Enter number of binary numbers: ");
	scanf("%d",&n);
	printf("Enter %d binary numbers:", n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	//Scanning from right side i.e from last entered binary number
	for(i=0;i<n;i++)
	{
	    if(a[i]==0)
            a[i]=1;
        else if(a[i]==1)
            a[i]=0;
        else
            printf("invalid");
	}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
