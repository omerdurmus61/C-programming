#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Bir sayi giriniz.\n");
    scanf("%d",&sayi);

    if(sayi%13==0 && sayi%17==0 )
    {
        printf("sayi 13 ve 17ye tam bolunuyor.\n");
    }
    else if(sayi%13==0)
    {
         printf("sayi 13e tam bolunuyor.\n");
    }
    else if(sayi%17==0)
    {
          printf("sayi 17ye tam bolunuyor.\n");
    }
    else
    {
        printf("sayimiz 13 ve 17ye tam bolunmuyor.");
    }
    return 0;

}
