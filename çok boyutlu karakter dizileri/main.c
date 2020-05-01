#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char dizi1[]="bonne";
   char dizi2[]="soiree";
   char dizi3[100]="";

    strcpy(dizi3,dizi1);
    strncpy(dizi3+3,dizi2,5);
    printf("%s",dizi3);


    return 0;
}
