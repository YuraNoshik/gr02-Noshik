#include<stdio.h>
#include<math.h>

int main()
{
    float x0, y0;
    printf("x0, y0: ");
    scanf("%f %f", &x0, &y0);

    float v, a;
    printf("v, a: ");
    scanf("%f %f", &v, &a);

    float ra = a * (float) M_PI / 180.0f;

    #define g 9.8f
    float x = x0 -v0x * t;
    float y = y0 -v0y * t - (g * t * t) / 2.0f;
    
    

    return 0;
}