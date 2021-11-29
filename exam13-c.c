#include <stdio.h>
#include <string.h>

struct record
{
	char fio[32];
	char cat[32];
	char num[24];
	char inf[64];
};

#define rows 3
struct record tab[rows];

int main()
{
    for(int i = 0; i < rows; i++)
    {
	    printf("[record %d]\n", i);

    	printf("fio: ");
	    gets(tab[i].fio);

    	printf("cat: ");
    	gets(tab[i].cat);

    	printf("num: ");
    	gets(tab[i].num);

    	printf("inf: ");
    	gets(tab[i].inf); //

    	printf("\n");
	}

    	for(int i = 0; i < rows; i++)
    	{
	    	printf("%s\t%s\t%s\t%s\n", tab[i].fio, tab[i].cat, tab[i].num, tab[i].inf);
    	}


    	printf("search surename: ");

    	char fio[32];

    	gets(fio);

    	printf("\n");

    	int n = 0;

    	for(int i = 0; i < rows; i++)
    	{
    		char *p = strtok(tab[i].fio, " ");

    		if(strcmp(p, fio) == 0)
    		{
	    		printf("num: %s\n", tab[i].num);
		    	printf("inf: %s\n", tab[i].inf);
		    	n++;
		    }		
	    }

    if(n < 1) printf("not found!\n");

    char category;

    printf("search category: ");

        char cat[32];
    	gets(cat);

    	printf("\n");
    	int m = 0;

    	for(int i = 0; i < rows; i++)
    	{
    		char *q = strtok(tab[i].cat, " ");

    		if(strcmp(q, cat) == 0)
    		{
	    		printf("phone: %s\n", tab[i].num);
		    	m++;
		    }		
	    }

    if(m < 1) printf("not found!\n");

    FILE *f = fopen("extask13-c.txt", "w");

    fprintf(f, "fio     num\n");

    for(int i = 0; i < rows; i++)
    	{
	    	fprintf(f, "%s\t%s\n", tab[i].fio, tab[i].num);
    	}

        fclose(f);

return 0;
}