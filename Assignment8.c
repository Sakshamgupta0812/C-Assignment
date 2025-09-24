#include <stdio.h>

int main()
{
    int a,b,num=1;
    printf("Enter the numbers: ");
    scanf("%d",&a);
    printf("Enter the power: ");
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        num *= a;
    }
    printf("%d^%d = %d\n",a,b,num);
    return 0;
}