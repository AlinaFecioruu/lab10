#include <stdio.h>
#include <stdlib.h>

FILE *f;
int LineCounter(FILE *f);

int main()
{
    f = fopen("C:\\Users\\Fecioo\\Desktop\\fisiere\\I4.txt", "r");

    if(f==NULL)
    {
        printf("Error!");
        return 0;
    }

    printf("\n%d\n", CharacterCounter(f));

    fclose(f);
    return 0;
}

int CharacterCounter(FILE *f)
{
    char c;
    int charcount = 1;

    while(feof(f)==0)
    {
        c=fgetc(f);

        if (c != ' ' && c != '\n')
             ++charcount;

    }

    return charcount;
}

