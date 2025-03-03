#include <stdio.h>
#include<conio.h>

int main()
{
    char nama[50],kom;
    int nim;
    float ip;

    printf("hello world\n");
    printf("masukkan nama:");
    gets(nama); //get string

    printf("masukkan NIM:");
    scanf("%d", &nim);

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

    printf("press any button to continue..");
    getch();
}