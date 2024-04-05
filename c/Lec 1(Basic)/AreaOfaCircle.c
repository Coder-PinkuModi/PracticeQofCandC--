#include<stdio.h>
int main()
{
    printf("Enter the radius of a circle: \n");
    float r, area;
    scanf("%f",& r);
    area=3.1415*r*r;
    printf("The area of a circle is: %f", area);
    return 0;
}