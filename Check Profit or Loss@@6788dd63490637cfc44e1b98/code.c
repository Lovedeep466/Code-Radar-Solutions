#include<stdio.h>
int main()
{
    int SP,CP;
    scanf("%d %d",&SP,&CP);
    if(SP>CP){
        printf("Loss");
    }
    else if(SP<CP){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}