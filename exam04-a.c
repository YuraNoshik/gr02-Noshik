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
    scanf("%le %le", &a, &b);

    double e;
    printf("e: ");
    scanf("%le", &e);

    while(1)
    {
        printf("%le %le %le")
        double c = (a + b)/2;

        double fa = f(a);
        double fc = f(c);

        if(fabs(fc) <= e)
        {
            printf("x: %.5f\n",c);
            printf("y: %.5f\n",fc);
            break;
        }

        if (fa * fc > 0.0f)
        {
            a = c; // b - c
        }
        else
        {
            b = c; //
        }
    }

    return 0;
}