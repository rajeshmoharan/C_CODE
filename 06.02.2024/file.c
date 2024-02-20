#include <stdio.h>
int main()
{
    FILE *f;
    char ch;

    f = fopen("bca.txt", "r");
    if (f == NULL)
    {
        printf("File not Opened!! try again");
    }
    else
    { 
        while((ch = fgetc(f))!= EOF){
            printf("%c",ch);
        }
        fclose(f);
    }
    return 0;
}
