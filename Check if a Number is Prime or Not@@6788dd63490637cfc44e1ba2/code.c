#include<stdio.h>
int main()
{
    int num,n;
    scanf("%d",&num);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(num%i==0){
            printf("Not prime");
        }
    }
    printf("Prime");
    return 0;
}