#include<iostream>
#include<vector>
using namespace std;

int main()
{
    system("cls");
    //vector declaration & initialization

    //cara mendeklarasikan dan inisialisasi vector
    vector<string>nama_karyawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};

    // for(string karyawan : nama_karyawan){ //mengakses semua element vector
    //     cout<<karyawan<<endl;
    // } 

    //add data to vector pada index terakhir
    nama_karyawan.push_back("Johannes");

    // for (int i=0;i<nama_karyawan.size();i++){  //mengakses element vector
    //     cout<<nama_karyawan[i]<<endl;
    // } 

    //Delete data form vector index terakhir
    nama_karyawan.pop_back();

    //Delete data form vector index tertentu
    nama_karyawan.erase(nama_karyawan.begin()+3); //hapus data pada index ketiga

    for (int i=0;i<nama_karyawan.size();i++){ //kembali mengakses vector
        cout<<nama_karyawan[i]<<endl;
    }
}
