#include<stdio.h>
int main()
{
    int CP,SP;
    scanf("%d %d",&CP,&SP);
    if(CP<SP){
        printf("Profit");
    }
    else if(SP<CP){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}