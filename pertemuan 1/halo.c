#include <stdio.h> 
#include<conio.h>

int main()
{
    char nama[50],kom;
    int nim;
    float ip; //pendeklarasian variabel

    printf("hello world\n"); //printf -> menampilkan
    printf("masukkan nama:");
    gets(nama); //get string, agar bisa membaca karakter spasi

    printf("masukkan NIM:");
    scanf("%d", &nim); //scanf -> menerima inputan
    getchar();
    printf("masukkan KOM:");
    scanf("%c", &kom);
    printf("masukkan IP:");
    scanf("%f", &ip);

    //untuk outputnya
    printf("Nama: ");
    puts(nama); //put string, digunakan untuk string dalam bentuk array char
    printf("NIM : %d\n",nim);
    printf("KOM : %c\n", kom);
    printf("IP  : %.0f", ip);

    printf("\npress any button to continue..");
    getch();
}
