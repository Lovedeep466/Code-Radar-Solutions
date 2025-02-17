#include<stdio.h>
int main()
{
    char sign;
    int a,b;
    scanf("%d %d %c",&a,&b,&sign);
    switch(sign){
        case '+':
        result=a+b;
        printf("%d",result);
        break;
        case '-':
        result=a-b;
        printf("%d",result);
        break;
        case '*':
        result=a*b;
        printf("%d",result);
        break;
        case '/':
            if(b!=0)
            result=a+b;
            printf("%d",result);
            else
            printf("error");
            break;
        default:
        printf("error");
    
    }
    return 0;
}