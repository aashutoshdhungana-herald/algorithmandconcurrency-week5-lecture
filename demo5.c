#include <stdio.h>
#include <math.h>

struct point
{
    float x;
    float y;
};

// Passing structure as function arguments
void translate(struct point *p, float x_offset, float y_offset)
{
    p->x += x_offset;
    p->y += y_offset;
}

int main()
{
    struct point p1 = {3.5, 4.5};
    printf("Point p1: (%.2f, %.2f)\n", p1.x, p1.y);
    translate(&p1, 1.0, 1.0);
    // Notice that the original point p1 is modified after translation
    printf("Point p1 after translation: (%.2f, %.2f)\n", p1.x, p1.y);
    return 0;
}