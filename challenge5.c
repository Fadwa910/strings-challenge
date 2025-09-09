#include <stdio.h>
#include <string.h>
int main()
{
    char fad[50];

    printf("entrer t1 :");
    scanf("%s", fad);
    int i;
    int test = strlen(fad);
    for(i = test - 1; i >= 0; i--)
    {
        printf("%c", fad[i]);
    }

}