#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,area,perimeter;

    printf("Enter the value of length and breadth:");
    scanf("%d%d",&a,&b);

    area=a*b;
    perimeter=a+b;

    printf("Area=%d\n Perimeter=%d\n",area,perimeter);

    return 0;
}
