#include <stdio.h>
int main() {
    int a, b, c, temp;

    printf("=== Program Mengurutkan 3 Angka ===\n");
    printf("Masukkan angka pertama: ");
    scanf("%d", &a);
    printf("Masukkan angka kedua: ");
    scanf("%d", &b);
    printf("Masukkan angka ketiga: ");
    scanf("%d", &c);

if (a > b) {
    temp = a;
    a = b;
    b = temp;
}
if (a > c) {
    temp = a;
    a = c;
    c = temp;
}
if (b > c) {
    temp = b;
    b = c;
    c = temp;
}
printf("Hasil pengurutan (terkecil ke terbesar): %d, %d, %d\n", a, b, c);

return 0;
}
