#include<stdio.h.
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int bitvalue=(a>>b)&1;
    printf("%d",bitvalue);
    return 0;
}