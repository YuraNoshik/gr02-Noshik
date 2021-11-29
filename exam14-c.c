#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record
{
	int acc;
	char fio[32];
	float sum;
	int prc;

	float res;
};

#define rows 3
struct record tab[rows];

int main()
{
	char tmp[32];
	for(int i = 0; i < rows; i++)
	{
		printf("[record %d]\n", i);

		printf("acc: ");
		gets(tmp);
		tab[i].acc = atoi(tmp);

		printf("fio: ");
		gets(tab[i].fio);

		printf("sum: ");
		gets(tmp);
		tab[i].sum = atof(tmp);

		printf("%%: ");
		gets(tmp);
		tab[i].prc = atoi(tmp);

		printf("\n");
	}
	
	for(int i = 0; i < rows; i++)
	{
    	tab[i].res = tab[i].sum + (tab[i].sum * tab[i].prc / 100.0f) / 12.0f;
	}
	
	for(int i = 0; i < rows; i++)
	{
		printf("%d\t%s\t%.2f\t%d\t%.2f\n", tab[i].acc, tab[i].fio, tab[i].sum, tab[i].prc, tab[i].res);
	}

	int choice;
    do
    {
        printf("\n");
	    printf("0 - exit\n");
	    printf("1 - search acc\n");
	    printf("2 - search fio\n");
        printf("3 - search proc\n");
        printf("choice: ");

        scanf("%d", &choice);
	    printf("\n");

        switch(choice)
	    {
		    case 1: 
            {
                int n = 0;
                printf("acc: ");
                int acc;
                scanf("%d", &acc);

    	        printf("\n");

    	        for(int i = 0; i < rows; i++)
    	        {
                    int acc1 = tab[i].acc; //
    		        if(acc == acc1)
    		        {
	    		        printf("%d\t%s\t%.2f\t%d\t%.2f\n", tab[i].acc, tab[i].fio, tab[i].sum, tab[i].prc, tab[i].res);
		    	        n++;
		            }		
	            }

                if(n < 1) printf("not found!\n");
            }; break;

		    case 2:
            {
				int m = 0;
				printf("fio: ");

				char fioo[32];
                scanf("%c", fioo);

				gets(fioo);

                printf("\n");

    	        for(int i = 0; i < rows; i++)
    	        {
    		        char *p = strtok(tab[i].fio, " ");

    		        if(strcmp(p, fioo) == 0)
    		        {
	    		        printf("%d\t%s\t%.2f\t%d\t%.2f\n", tab[i].acc, tab[i].fio, tab[i].sum, tab[i].prc, tab[i].res);
		    	        m++;
		            }		
	            }

                if(m < 1) printf("not found!\n");
            }break;
            
            case 3:
            {
                int p = 0;
                printf("proc: ");

                int proc;
                scanf("%d", &proc);

    	        printf("\n");

    	        for(int i = 0; i < rows; i++)
    	        {
                    int proc_tab = tab[i].prc;
    		        if(proc_tab == proc)
    		        {
	    		        printf("%d\n", tab[i].acc);
		    	        p++;
		            }		
	            }

                if(p < 1) printf("not found!\n");
            }break;
    	}
        printf("\n");

    }
    while(choice != 0);

return 0;
}