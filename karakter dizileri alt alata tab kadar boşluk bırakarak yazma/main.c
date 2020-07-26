#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    printf("Bir cumle giriniz.\n");
    gets(cumle);
    int i=0,sayac=0;

    while(cumle[i]!='\0')
    {
        printf("%c",cumle[i]);

        if(cumle[i]==32)
        {
            printf("\n");
            sayac++;

            for(int i=0;i<sayac;i++)
            {
                printf("\t");
            }
        }
        i++;
    }
    return 0;
}
