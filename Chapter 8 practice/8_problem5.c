#include <stdio.h>

char *strcpy(char *name, char *cpyanme);

char *strcpy(char *name, char *cpyname)
{
    for (int i = 0; i < 14; i++)
    {
        cpyname[i] = name[i];
    }

    return cpyname;
}

int main()
{
    char name[] = "Masrafi Rahman";
    char cpyname[20];

    printf("%s \n", name);
    strcpy(name, cpyname);
    printf("%s \n", cpyname);

    return 0;
}