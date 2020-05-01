#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char karakterDizisi[10]="abcdef";
    char karakterDizisi2[10]="ABCDEF";
    int i;

    i= strcmp(karakterDizisi,karakterDizisi2);
 //   printf("%d",i);

    if(i<0)
    {
        printf("karakterDizisi karakterDizisi2 den daha kucuktur");

    }
    else if (i>0)
    {
        printf("karakterDizisi2 karakterDizisinden daha kucuktur");
    }
    else if (i==0)
    {
        printf("iki deger birbirine esittir");
    }
    return 0;
}
