#include <stdio.h>
#include <math.h>

int main(){
    int putaran = 5;
    int jarak = 14;
    double keliling = (double)jarak/ putaran;
    double jari = (double)keliling / (2 * M_PI);

    printf("Diketahui :");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", jarak);
    printf("Jawaban :");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari);
}