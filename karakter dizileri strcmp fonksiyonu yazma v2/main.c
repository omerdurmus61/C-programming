#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrcmp(char dizi1[],char dizi2[]);

int main()
{
    char dogruCevap[]="Ankara";
    char cevap[10];

    printf("Merhaba Turkiyenin baskenti neresidir?\n");

    scanf("%s",cevap);

    if(1 == myStrcmp(dogruCevap,cevap))
    {
        printf("Dogru cevap.");
    }
    else
    {
        printf("Yanlis cevap.");
    }

    return 0;
}
int myStrcmp(char dizi1[],char dizi2[])
{
    int i=0;
    int uzunluk1 , uzunluk2;

    uzunluk1 = strlen(dizi1);
    uzunluk2 = strlen(dizi2);

    if(uzunluk1 != uzunluk2 )
        return 0;

    while(dizi1[i]!='\0' && dizi2[i]!='\0')
    {
        if(dizi1[i]==dizi2[i] )
        {
            i++;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}
