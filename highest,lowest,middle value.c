#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the first value:\n");
    scanf("%d",&a);
     printf("Enter the second value:\n");
    scanf("%d",&b);
     printf("Enter the third value:\n");
    scanf("%d",&c);
    if(a<b<c)
    {
        printf("%d is the highest value\n",c);
        printf("%d is the middle value\n",b);
        printf("%d is the lowest value\n",a);
    }
    else if(b<a<c)
    {
        printf("%d is the highest value\n",b);
        printf("%d is the middle value\n",a);
        printf("%d is the smallest value\n",c);
    }
    else if(c<b<a)
    {
        printf("%d is the highest value\n",c);
        printf("%d is the middle value\n",b);
        printf("%d is the smallest value\n",a);
    }
    else if(a<c<b)
    {
        printf("%d is the highest value\n",a);
        printf("%d is the middle value\n",c);
        printf("%d is the smallest value\n",b);
    }
    else if(b<c<a)
    {
        printf("%d is the highest value\n",b);
        printf("%d is the middle value\n",c);
        printf("%d is the smallest value\n",a);
    }
    else if(c<a<b)
    {
        printf("%d is the highest value\n",c);
        printf("%d is the middle value\n",a);
        printf("%d is the smallest value\n",b);
    }
    else if(a>b>c)
    {
        printf("%d is the highest value\n",a);
        printf("%d is the middle value\n",b);
        printf("%d is the smallest value\n",c);
    }
    else if(b>c>a)
     {
        printf("%d is the highest value\n",b);
        printf("%d is the middle value\n",c);
        printf("%d is the smallest value\n",a);
     }
     else if(c>b>a)
      {
        printf("%d is the highest value\n",c);
        printf("%d is the middle value\n",b);
        printf("%d is the smallest value\n",a);
      }
}