#include<stdio.h>
int main ()
{
    int centimeter;
    float meter,kilometer;

    printf("Enter the length in centimeter:");
    scanf("%d",&centimeter);

    meter=centimeter*0.01;
    kilometer=centimeter*0.001*0.01;

    printf("In Meter=%f\n In kilometer=%f\n",meter,kilometer);

    return 0;
}
