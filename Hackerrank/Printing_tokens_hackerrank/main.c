#include <stdio.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            printf("\n");
        }
        else {
            printf("%c", s[i]);
        }
    }
    return 0;
}
