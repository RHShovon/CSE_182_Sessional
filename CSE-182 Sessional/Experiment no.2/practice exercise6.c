#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the three number:");
    scanf("%d%d%d",&a,&b,&c);

    max=(a>b&&a>c)? (a):((b>c)?(b):(c));
    printf(" max number is:%d\n",max);

    return 0;

}
