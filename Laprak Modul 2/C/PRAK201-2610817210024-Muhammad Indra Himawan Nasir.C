#include <stdio.h>
int main(){
    char nama[50];
    char nim [20];
    char kelas_paralel[20];
    char ttl[50];
    char alamat[100];
    char hobby[50];
    char no_hp[20];
    
    printf("--- INPUT BIODATA---\n");
    printf("Nama : ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM : ");
    fgets(nim, sizeof(nim), stdin);

    printf("Kelas Paralel : ");
    fgets(kelas_paralel, sizeof(kelas_paralel), stdin);
    
    printf("Tempat/Tanggal lahir : ");
    fgets(ttl, sizeof(ttl), stdin);

    printf("Alamat : ");
    fgets(alamat, sizeof(alamat), stdin);

    printf("Hobby : ");
    fgets(hobby, sizeof(hobby), stdin);

    printf("No. Hp : ");
    fgets(no_hp, sizeof(no_hp), stdin);
  
    printf("\n--- OUTPUT BIODATA ---\n");
    printf("Nama : %s", nama);
    printf("NIM : %s", nim);
    printf("Kelas paralel : %s", kelas_paralel);
    printf("Tempat/Tanggal Lahir : %s", ttl);
    printf("Alamat : %s", alamat);
    printf("Hobby : %s", hobby);
    printf("No. Hp : %s", no_hp);

    return 0;
}