#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    f = fopen("exam09-b.txt", "r");

    #define days 31
    float coeff[days];
    float max=0;
    float min=10000000;
    
   for (int i = 0; i < days; i++)
   {
     fscanf(f,"%f", &coeff[i]);
   }
        
    for (int i = 0; i < days; i++)
    {
        printf("% 6.2f", coeff[i]);
        if(i % 7 == 6) printf("\n");

        if(coeff[i] < min) min = coeff[i];
        if(coeff[i] > max) max = coeff[i];
    }
    if (days != 28) printf("\n");

    #define set_blue printf("\033[1;34m")
    #define set_yellow printf("\033[1;33m")
    #define set_default printf("\033[0m")

    printf("Минимальное значение доллара = "); set_blue; printf("%.2f\n", min); set_default;
    printf("Максимальное значение доллара = "); set_yellow; printf("%.2f\n", max); set_default;

    return 0;

}