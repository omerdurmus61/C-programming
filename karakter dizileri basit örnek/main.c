#include <stdio.h>
#include <stdlib.h>

int main()
{
    char metin[100];
    printf("Bir cumle giriniz.\n");
    gets(metin);

    int i=0;

    while(metin[i]!='\0')
    {
        printf("%c\n",metin[i]);
        i++;
    }
    return 0;
}
