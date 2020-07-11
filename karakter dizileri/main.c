#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;

   char iller[][10]={"bursa","istanbul","ankara"};

    puts("--------------il listesi--------------");

    for(i=0;i<3;i++)
        puts(iller[i]);

        puts("--------------ulke listesi-------------- ");

    char ulkeler[][10]={"turkiye","almanya","rusya"};

    for(i=0;i<3;i++)
        puts(ulkeler[i]);
    return 0;
}
