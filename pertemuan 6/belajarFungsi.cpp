#include <iostream>
using namespace std;

void sapa(string nama){
    cout<<"Halo "<<nama<<"! Selamat belajar C++"<<endl;
}
int main()
{
    system("cls");
    string namapengguna = "Johannes";

    sapa(namapengguna);

    return 0;
}