#include <stdio.h>
int main()
{
    char tab[50];
    char fad[60];
    int a = 0;
    printf("entrer le 1ere : ");
    scanf("%s", &tab);
    printf("entrer le 2eme : ");
    scanf("%s", &fad);
    for(int i = 0; tab[i] != '\0'; i++)
    {
        if( tab[i] == fad[i])
        {
            printf("sont egale : ");
        }
    }
    for (int i = 0; fad[i] != '\0'; i++)
    {
         if (tab[i] != fad[i])
        {
        printf("sont pas egale : ");
        
        }
    }
    return 0;
}