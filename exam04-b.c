#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x)
{
    return -3.0f * cos(x);
}

int main()
{
    double a, b;
    printf("a, b: ");
    scanf("%lf %lf", &a, &b);

    double e;
    printf("e: ");
    scanf("%lf", &e);

    while(1)
    { 
        double c = (a + b)/2;
        double fa = f(a);
        double fc = f(c);

        printf("%.8lf %.8lf %.8lf %.8lf %.8lf\n", a,b,c,fa,fc );

        if(fabs(fc) <= e)
        {
            printf("x: %.6lf\n",c);
            printf("y: %.6lf\n",fc);
            break;
        }

        if (fa * fc > 0.0f)
        {
            a = c;
        }
        else
        {
            b = c; 
        }
    }

    return 0;
}