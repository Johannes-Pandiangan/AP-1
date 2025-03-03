#include<iostream> //header untuk c++
#include<conio.h> //header untuk getche() dan getch()
using namespace std; 

int main()
{
    string nama;
    char kom,JK; 
    int nim,ip;
    /*ini untuk komentar yang 
    beberapa baris*/
    cout<<"hello world";
    cout<<"\nmasukkan nama: ";
    getline(cin, nama); //agar karakter spasi bisa terbaca (pengganti cin)
    cout<<"masukkan KOM:";cin>>kom;
    cout<<"masukkan NIM:";cin>>nim;
    cout<<"masukkan IP:";cin>>ip;
    cout<<"masukkan jenis kelamin(L/P): ";
    JK = getche(); //agar karakter langsung tampil, jadi ga perlu tekan enter

    //untuk output
    cout<<"\nnama kamu adalah "<<nama;
    cout<<"\nKOM  "<<kom;
    cout<<"\nNIM: "<<nim;
    cout<<"\nIP : "<<ip<<endl;
    putchar(JK); //untuk menampilkan karakter jenis kelamin

    getch();//karakter ga akan ditampilkan di layar, tapi disimpan di memori
}