#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a>18)&1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}