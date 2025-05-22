#include<iostream>
using namespace std;

int main()
{ string kalimat;
    int i;
    system("cls");
    cout<<"Masukkan kalimat: ";
    getline(cin,kalimat); //agar bisa membaca spasi

    for(i=0; i<kalimat.length(); i++){
        kalimat[i] = toupper(kalimat[i]); //toupper->mengubah menjadi huruf kapital semua
    }
    cout<<"kalimat dalam huruf kapital : "<<kalimat<<endl;

    return 0;
}
