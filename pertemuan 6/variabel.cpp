#include<iostream>
using namespace std;

string namaGlobal ="Ilmu";

void namaVariabel(){
    string namaLokal = "Komputer";

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