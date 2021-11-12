#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    #define months 12
    int salary[months];

    #define salary_low 1000
    #define salary_high 5000
    float YearTax = 0;
    int sum = 0;


    for (int i = 0; i < months; i++)
        salary[i] = salary_low + rand() % (salary_high - salary_low + 1);
    
    for (int i = 0; i < months; i++)
        sum += salary[i];

    float avg = sum / (float) months;

    for(int i = 0; i < months; i++)
    {
        printf("%d\t", (i + 1));
        printf("%d\t", salary[i]);

        float tax = salary[i] * 0.02f;
        YearTax += tax;
        printf("%.1f\t", tax);

        float r = salary[i] - avg;
        printf("%.1f\n", r);
    }

    printf ("Salary for year: %d\n", sum);
    printf ("Average salary: %.3f\n",avg );
    printf ("Annual contribution to the pension fund : %.3f\n", YearTax);

    return 0;
}