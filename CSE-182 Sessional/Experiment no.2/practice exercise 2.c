#include<stdio.h>
int main()

#define PI 3.1416
{
    int r,diameter;
    float circumference,area;

    printf("Enter the value of the circle");
    scanf("%d",&r);

    diameter=2*r;
    circumference=2*PI*r;
    area=PI*r*r;

    printf("Diameter=%d\n Circumference=%f\n Area=%f\n",diameter,circumference,area);

    return 0;

}
