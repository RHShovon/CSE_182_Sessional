#include <stdio.h>
void main()
{
    int a,b,max;

    printf("Enter the two number:");
    scanf("%d%d",&a,&b);

    max=(a>b)?(printf("Max=%d",a)):(printf("Max=%d",b));

    return 0;
}
