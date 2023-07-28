#include<stdio.h>
int main()
{
    int c;
    float f;

    printf("Enter the temperature in celsius:");
    scanf("%d",&c);

    f=((9*c)/5)+32;

    printf("Temperature in Ferenheit=%f\n",f);

    return 0;
}
