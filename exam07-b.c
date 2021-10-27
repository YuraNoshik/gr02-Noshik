#include <stdio.h>
#include <stdlib.h>

float avg(float a, float b)
{
    float z;
    z = a/b;
    return z;
}
int main()
{
    int N;
    printf("Количество оценок: ");
    scanf("%d", &N);
    float sum;
    float avg2;
    int m[N];
    printf("Ввод оценок: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &m[i]);
       sum += m[i];
        if (m[i] < 2 || m[i]>5)
        {
            printf("Неверно введена оценка\n");
            return 0;
        }
    }
    avg2 = avg(sum, N);
    printf("Средний балл аттестата:%.1f\n ", avg2);
    if (avg2 >= 4.6)
    {
        printf("Ученик поступит\n");
    }
    else
    {
        printf("Ученик не поступит\n");
    }
    return 0;
}



