#include <stdio.h>

int main()
{
    int a,b,num=1;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++)
    {
        num *= a;
    }
    printf("%d^%d = %d\n",a,b,num);
}