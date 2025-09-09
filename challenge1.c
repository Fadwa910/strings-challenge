#include <stdio.h>
int main()
{
    char t[20];

    printf("entrer fgg : ");
    scanf("%c", t);
    for (int i = 0;  t[i] != '\0'; i++)
    {
        printf("%c\n", t[i]);
    }
    
    return 0;
}