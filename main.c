#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Nilai;
    char Index;

    printf("Masukkan Nilai Anda:\n");
    scanf("%lf", &Nilai);

    if (Nilai >= 80) {
        Index = 'A';
    }
    else
    if (Nilai >= 70 && Nilai < 80) {
        Index = 'B';
    }
    else
    if (Nilai >= 60 && Nilai < 70){
       Index = 'C';
    }
    else
    if (Nilai == 50){
        Index = 'D';
    }
    else {
        Index = 'E';
    }

    printf ("Nilai anda adalah %c", Index);

    return 0;
}
