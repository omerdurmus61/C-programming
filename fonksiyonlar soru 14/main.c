#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int );

int main()
{
    int sayi;
    printf("Bir sayi giriniz.\n");
    scanf("%d",&sayi);

   if( faktoriyel(sayi)<0)
   {
       printf("Negatif sayilarin faktoriyeli olmaz.\n");
   }
   else
   {
      printf("faktoriyel=%d",faktoriyel(sayi));
   }



    return 0;
}
int faktoriyel(int sayi)
{
    int faktoriyel=1;

    if(sayi<0)
        return -1;
    else
    {
        for(int i=1;i<=sayi;i++)
        {
            faktoriyel=faktoriyel * i;
        }
         return faktoriyel;
    }


}
