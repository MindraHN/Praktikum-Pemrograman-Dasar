#include <stdio.h>

int main() {
    int a;

    printf("Masukkan bilangan: ");
    scanf("%d", &a);

    if (a < 0 || a >= 100) {
        printf("Anda menginput melebihi limit bilangan");
    } else if (a == 0) {
        printf("Nol");
    } else if (a >= 1 && a <= 9) {
        printf("Satuan");
    } else if (a >= 10 && a <= 19) {
        printf("Belasan");
    } else {
        printf("Puluhan");
    }

return 0;
}