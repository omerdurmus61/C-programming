#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;
    printf("iki adet sayi giriniz.\n");
    scanf("%d%d",&sayi1,&sayi2);

    if(sayi1==0 || sayi2==0)
    {
        printf(">>isaret(%d*%d)= 0 ",sayi1,sayi2);
    }

    else if(sayi1<0 && sayi2<0)
    {
        printf(">>isaret(%d*%d)= +1 ",sayi1,sayi2);
    }
    else if(sayi1<0 && sayi2>0)
    {
        printf(">>isaret(%d*%d)= -1 ",sayi1,sayi2);
    }
    else if(sayi1>0 && sayi2<0)
    {
        printf(">>isaret(%d*%d)= -1 ",sayi1,sayi2);
    }
    else if(sayi1>0 && sayi2>0)
    {
        printf(">>isaret(%d*%d)= +1 ",sayi1,sayi2);
    }



        //Farklı bir yöntem

    if(sayi1*sayi2>0)
    {
         printf("\n>>isaret(%d*%d)= 1 ",sayi1,sayi2);
    }
    else if(sayi1*sayi2<0)
    {
         printf("\n>>isaret(%d*%d)= -1 ",sayi1,sayi2);
    }
    else if (sayi1*sayi2==0)
    {
         printf("\n>>isaret(%d*%d)= 0 ",sayi1,sayi2);
    }
    return 0;
}
