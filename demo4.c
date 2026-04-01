#include <stdio.h>
#include <math.h>

struct point
{
    float x;
    float y;
};

// Passing structure as function arguments
float distance(struct point p1, struct point p2)
{
    float x_dist = p2.x - p1.x;
    float y_dist = p2.y - p1.y;
    float result = sqrt(x_dist * x_dist + y_dist * y_dist);
    return result;
}

int main()
{
    struct point p1 = {3.5, 4.5};
    struct point p2 = {7.5, 9.5};
    float dist = distance(p1, p2);
    printf("Point p1: (%.2f, %.2f)\n", p1.x, p1.y);
    printf("Point p2: (%.2f, %.2f)\n", p2.x, p2.y);
    printf("Distance: %.2f\n", dist);
    return 0;
}