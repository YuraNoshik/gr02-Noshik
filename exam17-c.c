#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[256];
    fgets(s, 256, stdin);

    char *p = strchr(s, '\n');
    if(p != NULL) p[0] = ' ';

    size_t n = strlen(s);

    printf("len: %ld\n", n-1); //

    int m = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == ' ') m++;
    }

    if (n > 0) m++;
    printf("words: %d\n", m-1);

    printf("\n");

    s[0] = toupper(s[0]);
	for(int i = 0; i < n; i++)
	{
        if (s[i-1] == ' ') s[i] = toupper(s[i]);
	}

    printf("%s\n", s);

    printf("\n");

    int c = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == ' ')
        {
            printf(" Words: %d", c);
            printf("\n");
            c = 0;
        }
        else  
        {
            c++;
            printf("%c", s[i]);
        }
    } 

    printf("\n");

    return 0;
}