#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    #define months 12
    int salary[months];

    #define salary_low 1000
    #define salary_high 5000

    for (int i = 0; i < months; i++)
        salary[i] = salary_low + rand() % (salary_high - salary_low + 1);

    for(int i = 0; i < months; i++)
        printf("% 6d", (i + 1));

    printf("\n");

    for(int i = 0; i < months; i++)
        printf("% 6d", salary[i]);

    printf("\n");

    float YearTax = 0;
    for(int i = 0; i < months; i++)
    {
        float tax = salary[i] * 0.02f;
        YearTax += tax;
        printf("% 6.1f", tax);
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < months; i++)
        sum += salary[i];
    
    printf ("Average for year: %d\n", sum);
    float avg = sum / (float) months;
    printf ("Average salary: %.3f\n",avg );
    printf ("Annual contribution to the pension fund : %.3f\n", YearTax);

    return 0;
}