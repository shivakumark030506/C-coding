// Online C compiler to run C program online
#include <stdio.h>

void main()
{
    int a;
    int b;
    int c;
    printf(" enter 1st value :\n");
    scanf("%d",&a);
    printf(" enter 2nd value :\n");
    scanf("%d",&b);
    printf(" enter 3rd value :\n");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("%d is the biggest \n",a);
        if (b>c)
        {
            printf("%d is the middle \n",b);
            printf("%d is the lowest \n",c);
        }
        else
        {
            printf("%d is the middle \n",c);
            printf("%d is the lowest \n",b);
        }
    }
    else if (b>a && b>c)
    {
        printf("%d is the biggest \n",b);
        if (a>c)
        {
            printf("%d is the middle \n",a);
            printf("%d is the lowest \n",c);
        }
        else
        {
            printf("%d is the middle \n",c);
            printf("%d is the lowest \n",a);
        }
    }
    else if (c>b && c>a)
    {
        printf("%d is the biggest \n",c);
        if (b>a)
        {
            printf("%d is the middle \n",b);
            printf("%d is the lowest \n",a);
        }
        else
        {
            printf("%d is the middle \n",a);
            printf("%d is the lowest \n",b);
        }
    }
}
