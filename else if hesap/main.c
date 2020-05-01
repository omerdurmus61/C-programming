#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a,b;
    char sembol;
    printf("yapacaginiz islemi seciniz [+,-,/,*]\n");
    scanf("%c",&sembol);
    printf("iki adet sayi giriniz.\n");
    scanf("%d%d",&a,&b);



   if(sembol == '+')
   {
       printf("%d",a+b);
   }
   else if(sembol == '-')
   {
       printf("%d",a-b);
   }
   else if(sembol == '/')
   {
       printf("%d",a/b);
   }
   else if(sembol == '*')
   {
       printf("%d",a*b);
   }

    return 0;
}
