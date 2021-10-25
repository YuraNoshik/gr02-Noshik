#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("Количество оценок: ");
    scanf("%d", &N);
    float sum;
    float avg;
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
    avg = sum / N;
    printf("Средний балл аттестата:%.1f\n ", avg);
    if (avg >= 4.6)
    {
        printf("Ученик поступит\n");
    }
    else
    {
        printf("Ученик не поступит");
    }
    return 0;
<<<<<<< HEAD
}



=======
}
>>>>>>> ef14c1fe9c0b8355fdeeec5d887cdbe6bde5ad6c
