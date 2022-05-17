
/* c programe to calculate the area and perimeter of circle,square,RAT and rectangle*/

#include <stdio.h>
#define PI 3.142857
float area_ofcircle(float radius)
{

    return PI * radius * radius;
}
float circumference_ofcircle(float radius)
{
    return 2 * PI * radius;
}

float area_ofsquare(float side)
{
    return side * side;
}
float perimeter_ofsquare(float side)
{
    return 4 * side;
}

float area_ofrectangle(float length, float width)
{
    return length * width;
}
float perimeter_ofrectangle(float length, float width)
{
    return (2 * (length + width));
}
float areaof_RAT(float base,float height)
{
    return (0.5 * base *height);
}
float perimeterof_RAT(float base,float height,float opposite)
{
    return base * height * opposite;
}
int main()
{
    int radius = 5;
    float side = 5.23;
    float area, circumference;
    float length = 2.5, width = 3.5;
    float opposite=1.1,base=2.2,height=1.2;
    printf("area of circle  is:%f\n", area_ofcircle(radius));
    printf("circumference of circle is:%f\n", circumference_ofcircle(radius));
    printf("area of sqaure is:%f\n", area_ofsquare(side));
    printf("perimeter of square is:%f\n", perimeter_ofsquare(side));
    printf("area of rectangle is :%f\n", area_ofrectangle(length, width));
    printf("perimeter of rectangle is :%f\n", perimeter_ofrectangle(length, width));
    printf("area of right angled triangle is :%f\n", areaof_RAT(base,height));
    printf("perimeter of right angled trinagle is :%f\n", perimeterof_RAT(base,height,opposite));
    return 0;
}
