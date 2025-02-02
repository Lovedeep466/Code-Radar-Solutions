#include<stdio.h>
int main()
{
    int a,b,c;
    float sum;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum=(a+b+c)/3;
    printf("Average: %.2f",sum);
    return 0;
}