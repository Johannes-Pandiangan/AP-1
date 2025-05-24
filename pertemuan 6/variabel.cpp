#include<iostream>
using namespace std;

string namaGlobal ="Ilmu"; //variabel global, bisa diakses dimana saja

void namaVariabel(){
    string namaLokal = "Komputer"; //variabel lokal, cuma bisa diakses pada bagian fungsi ini saja

    //coba akses
    cout<<namaLokal<<endl;

    //coba akses
    cout<<namaGlobal<<endl;
}

int main()
{
    system("cls");
    namaVariabel();

    //coba akses
    cout<<namaGlobal<<endl;
}
