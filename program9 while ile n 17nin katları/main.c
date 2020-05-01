#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i=0,j=0,sayi;
     printf("Limiti giriniz belirleyin.\n");
     scanf("%d",&sayi);
     printf("0 ile %d arasindaki 17 nin kati olan sayilar.\n",sayi);

     while(i <= sayi)
     {
         if(i%17==0)
         {
             printf("%4d",i);
             j++;
            if(j%10==0)
            {
            printf("\n");
            }
         }
         i++;
     }

    return 0;
}
