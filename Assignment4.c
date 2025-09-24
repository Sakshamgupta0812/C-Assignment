#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number for factorial: ");
    scanf("%d",&a);
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact *=i;
    }
    printf("Factorial of %d is %d\n",a,fact);
    return 0;
}