#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        \n = alt satıra geçer
        \r = satır başı yapar
        \t = yatay tab yapar ,4 boşluk bırakır
        \v = dikey tab yapar
        \b = imleci sbir sola kaydırır
        %% = % işaretini bastırır
        \" = " işaretini bastırır
        \' = ' işaretini bastırır
        \\ = \ işaretini bastırır
        */

        printf("a \n b \n");
        printf("a \r b \n");
        printf("a \t b \n");
        printf("a \v b \n");
        printf("a \b b \n");
        printf(" %% \n");
        printf(" \" \n ");
        printf(" \' \n");
        printf(" \\ \n");


    return 0;
}
