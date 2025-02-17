#include<stdio.h>
#include<limits.h>
int main()
{
    unsigned int a,msb;
    scanf("%u",&a);
    msb=1<<(sizeof(int)*CHAR_BIT - 1);
    if(a&msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}