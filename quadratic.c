#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,c,determinant,root1,root2;
    double realPart,imaginaryPart;
    printf("enter coeffients of a,b,c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    determinant = b*b-4*a*c;
    if(determinant == 0)
    {
        printf("roots are real and equal.");
        root1=root2=-b/2*a;
        printf("%.2lf%.2lf",root1,root2);

    }
    else if(determinant > 0)
    {

        printf("roots are real and different");
        root1 = (-b+sqrt(b*b-4*a*c))/2*a;
        root2 = (-b-sqrt(b*b-4*a*c))/2*a;
        printf("%.2lf%.2lf",root1,root2);

    }
    else
    {
        printf("roots are complex and different.");
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-determinant)/(2*a);
        printf("root1 = %.5lf+%.5lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}
