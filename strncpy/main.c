#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char dizi1[]="m e k a t r o n i k ";
    char dizi2[100]="";

    strncpy(dizi2,dizi1,4);
    printf("%s",dizi2);
    return 0;
}
