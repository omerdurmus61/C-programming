#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int uzunTamsayi=66666666;
    unsigned long int isaretsizUuzunTamsayi=54646;
    long double uzunOndalikliSayi=123456.231;

      printf("uzunTamsayi %%ld gosterimi = %ld\n",uzunTamsayi);
      printf("uzunTamsayi %%li gosterimi = %li\n",uzunTamsayi); // Bildiðiniz üzere int veri tipinde %d yerine %i de kullanýlabiliyor.

      printf("isaretsizUzunTamSayi %%ul goterimi = %ul\n",isaretsizUuzunTamsayi);

      printf("uzunOndalikliSayi %%Lf gosterimi = %Lf\n",uzunOndalikliSayi);
      printf("uzunOndalikliSayi %%Le gosterimi = %Le\n",uzunOndalikliSayi);
      printf("uzunOndalikliSayi %%LE gosterimi = %LE\n",uzunOndalikliSayi);
    return 0;
}
