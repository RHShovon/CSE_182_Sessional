#include <stdio.h>
int main()
{
    int a,b,area,perimeter;
    printf("Enter two sides of rectangle:");
    scanf("%d%d",&a,&b);

    area=a*b;
    perimeter=a+b;

    printf("Area=%d\n perimeter=%d\n",area,perimeter);

}

