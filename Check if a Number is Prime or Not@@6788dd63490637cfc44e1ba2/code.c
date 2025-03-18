#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int a=0;
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}