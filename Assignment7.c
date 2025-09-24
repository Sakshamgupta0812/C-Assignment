#include<stdio.h>

int main()
{
    int a,sum=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(int i=a;i>0;i/=10)
    {
        int num = i%10;
        sum += num;
    }
    printf("Sum of digits of %d is %d\n",a,sum);
    return 0;
}