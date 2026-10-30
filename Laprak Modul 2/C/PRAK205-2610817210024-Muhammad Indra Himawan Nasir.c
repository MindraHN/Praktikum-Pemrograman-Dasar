#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    float alas, tinggi, keliling, luas;

    scanf("%f %f", &a, &b);

    alas = sqrt((b * b) - (a * a));
    tinggi = a;
    keliling = alas + tinggi + b;
    luas = alas * tinggi / 2;

    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}