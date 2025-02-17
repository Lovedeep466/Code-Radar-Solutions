#include<stdio.h>
int main()
{
    int a,msb;
    scanf("%d",&a);
    msb=1<<(sizeof(int)*CHAR_BIT - 1);
    if(a&msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}