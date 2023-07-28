#include<stdio.h>
#include<math.h>

void main()
{
    int a,b,c,p;
    float s,area;

    printf("Enter three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);

    p=a+b+c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Perimeter=%d\n Area=%.2f\n",p,area);

}
