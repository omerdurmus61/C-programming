#include <stdio.h>
#include <stdlib.h>

int myStrlen(char []);

void myStrcpy(char [],char []);

int main()
{

    char dizi1[10]="omer";
    char dizi2[10];


    myStrcpy(dizi2,dizi1);

    printf("%s",dizi2);

    return 0;
}
int myStrlen(char dizi[])
{
    int a=0;

    for(int i=0;dizi[i]!='\0';i++)
        a++;
    return a;
}

void myStrcpy(char dizi2[],char dizi1[])
{
    int i,uzunluk;
    uzunluk=myStrlen(dizi1);

    for(i=0;i<=uzunluk;i++)
        dizi2[i]=dizi1[i];
}
