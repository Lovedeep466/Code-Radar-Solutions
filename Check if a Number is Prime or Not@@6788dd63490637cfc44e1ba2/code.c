#include<stdio.h>
int main()
{
    int num,n;
    scanf("%d",&num);
    int a=0;
    for(int i=2;i<=n-1;i++){
        printf("%d\n",a);
        if(num%i==0){
            a=1;
            break;
        }
    }
     printf("%d\n",a);
    if(a==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}