#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 80) {
        printf("Output: A\n");
    } else if (nilai >= 70) {
        printf("Output: B\n");
    } else if (nilai >= 60) {
        printf("Output: C\n");
    } else if (nilai >= 50) {
        printf("Output: D\n");
    } else {
        printf("Output: E\n");
    }

return 0;
}