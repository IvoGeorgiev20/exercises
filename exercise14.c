#include <stdio.h>
#include <math.h>

int area_rectangle(int width, int heigth)
{
    int area = width * heigth;
    return area;
}

int area_circle(int radius)
{
    int area = M_PI * radius * radius;
    return area;
}

float find_distance(float x1, float y1, float x2, float y2)
{
    float distance = sqrt((x1 - y1) * (x1 - y1) + (x2 - y2) * (x2 - y2));
    return distance;
}
int main()
{
    int h, w, area;
    int radius;
    float x1, y1, x2, y2, distance;
    printf("Enter the width : ");
    scanf("%d", &w);
    printf("Enter the heigth : ");
    scanf("%d", &h);
    printf("The area of the rectangle is %d\n", area_rectangle(w, h));
    printf("\nEnter the radius of circle : ");
    scanf("%d", &radius);
    printf("The area of the circle is %d\n", area_circle(radius));
    printf("\nEnter x1: ");
    scanf("%f", &x1);
    printf("Enter y1: ");
    scanf("%f", &y1);
    printf("Enter x2: ");
    scanf("%f", &x2);
    printf("Enter y2: ");
    scanf("%f", &y2);
    printf("\nDistance between Points A and B is: %.4f\n", find_distance(x1, y1, x2, y2));
    return 0;
}
