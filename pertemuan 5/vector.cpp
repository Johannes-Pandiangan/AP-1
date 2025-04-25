#include<iostream>
#include<vector>
using namespace std;

int main()
{
    system("cls");
    //vector declaration & initialization

    vector<string>nama_karyawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};

    // for(string karyawan : nama_karyawan){
    //     cout<<karyawan<<endl;
    // } 

    //add data to vector index terakhir
    nama_karyawan.push_back("Johannes");

    // for (int i=0;i<nama_karyawan.size();i++){
    //     cout<<nama_karyawan[i]<<endl;
    // }

    //Delete data form vector index terakhir
    nama_karyawan.pop_back();

    //Delete data form vector index tertentu
    nama_karyawan.erase(nama_karyawan.begin()+3);

    for (int i=0;i<nama_karyawan.size();i++){
        cout<<nama_karyawan[i]<<endl;
    }
}