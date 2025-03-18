#include<stdio.h>
int main()
{
    int num,n;
    scanf("%d",&num);
    int a=0;
    for(int i=2;i<n;i++){
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