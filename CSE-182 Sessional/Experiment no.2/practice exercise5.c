#include<stdio.h>
void main()
{
    int d;
    float w,y;

    printf("Enter the number the number of days:");
    scanf("%d",&d);

    w=d/7;
    y=d/365;

    printf("Number of weeks=%.3f\n Number of years=%.3f\n",w,y);

}
