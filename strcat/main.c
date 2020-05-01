#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char bos[100];
    strcpy(bos,"mekatronik");

    strcat (bos," muhendisligi");

    printf("%s\n",bos);

    printf("karakter sayisi=%d",strlen(bos));
    return 0;
}
