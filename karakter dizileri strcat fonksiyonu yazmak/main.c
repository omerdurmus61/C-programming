#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 void myStrcat(char dizi1[],char dizi2[])
 {
     int i,uzunluk1,uzunluk2;

     uzunluk1 = strlen(dizi1);
     uzunluk2 = strlen(dizi2);

    for( i=0;i<uzunluk2;i++)
        dizi1[uzunluk1+i]=dizi2[i];

    dizi1[uzunluk1+i]='\0';
 }


int main()
{
    char dizi1[]="Merhaba";
    char dizi2[]=" omer";

    myStrcat(dizi1,dizi2);

    printf("%s",dizi1);

    return 0;
}
