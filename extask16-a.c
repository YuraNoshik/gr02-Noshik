#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record
{
    char drug_name[64];
    char indications[64];
    int exp_years;
    int mfg_year;
};

#define n 3
struct record row[n];

int main()
{
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d", 
            row[i].drug_name, row[i].indications,
            &row[i].exp_years, &row[i].mfg_year);
    }
    
    printf("drug_name\tindications\texp_years\tmfg_year\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%s\t\t%s\t\t%d\t\t%d\n", 
            row[i].drug_name, row[i].indications,
            row[i].exp_years, row[i].mfg_year);
    }
    return 0;
}