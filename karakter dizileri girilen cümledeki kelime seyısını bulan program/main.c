#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int i=0,kelimeSayisi=0;
    printf("Bir cumle giriniz.\n");
    gets(cumle);

    while(cumle[i]!='\0')
    {
        if(cumle[i]==32)
        {
            kelimeSayisi++;
        }
        i++;
    }

    printf("Girilen cumledeki kelime sayisi %d",kelimeSayisi+1);
    return 0;
}
