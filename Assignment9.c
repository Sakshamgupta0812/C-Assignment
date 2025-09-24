#include <stdio.h>

int main()
{
    int a,num=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            num++;
        }
    }
    if(num==2)
    {
        printf("%d is a prime number\n",a);
    }
    else
    {
        printf("%d is not a prime number\n",a);
    }
    return 0;
}