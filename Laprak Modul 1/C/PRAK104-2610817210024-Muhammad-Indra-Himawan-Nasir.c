#include <stdio.h>

int main() {
    int sepatu_a = 400000;
    int sepatu_b = 350000;
    int diskon_a = sepatu_a - (sepatu_a * 13 / 100);
    int diskon_b = sepatu_b - (sepatu_b * 21 / 100);

    printf("Harga sepatu A adalah %d\n", sepatu_a);
    printf("Harga sepatu B adalah %d\n", sepatu_b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", diskon_a);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", diskon_b);
    }