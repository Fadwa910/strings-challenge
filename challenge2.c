#include <stdio.h>
int main()
{
    char t[100];
    int longeur = 0;
    int i = 0;
    printf("entrer fgg : ");
fgets(t,sizeof(t),stdin); 
   while(t[i]!='\0'  && t[i]!='\n')
   {
       longeur++;
       i++;
   }
    printf("%d\n", longeur);
    
    return 0;
}