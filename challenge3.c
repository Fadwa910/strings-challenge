#include <stdio.h>
#include <string.h>
int main()
{
    char t[30];
    char l[40];
    
    printf("entrer le 1ere : ");
    scanf("%s", t);
    
    printf("entrer la 2eme : ");
    scanf(" %s", l);
    
    printf("result : %s", strcat(t, l));
    
}