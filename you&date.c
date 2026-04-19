// Online C compiler to run C program online
#include <stdio.h>
void main()
{
    float you,date;
    printf(" enter your stylishness: \n");
    scanf("%f",&you);
    printf("enter the stylishness your date : \n");
    scanf("%d",&date);
    if (you<=2 || date<=2) 
    {
        printf("you will not get the date");
    }
    else if (you>=8 || date>=8)
    {
        printf(" yes ,you will get the tab");
    }
    else
    {
        printf("you may get the table");
    }
}
