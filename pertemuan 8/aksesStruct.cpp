#include<iostream>
#include<string>
using namespace std;

//mendeklarasikan struct
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main()
{   system("cls");
    Mahasiswa mhs1; //mengakses struct
    mhs1.nama = "Johannes";
    mhs1.umur = 18;
    mhs1.ipk = 4.00;

    //cara akses struct yang biasa digunakan
    // cout<<"Akses dengan . :"<<endl;
    // cout<<"Nama: "<<mhs1.nama<<endl;
    // cout<<"Umur: "<<mhs1.umur<<endl;
    // cout<<"IPK: "<<mhs1.ipk<<endl;

    Mahasiswa *ptrMhs = &mhs1; //akses struct dengan menggunakan pointer
    cout<<"Akses dengan -> :"<<endl;
    cout<<"Nama: "<<ptrMhs->nama<<endl;
    cout<<"Umur: "<<ptrMhs->umur<<endl;
    cout<<"IPK: "<<ptrMhs->ipk<<endl;
}
