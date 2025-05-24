#include<iostream>
#include<string>
#include<vector>
using namespace std;

//struct untuk mengumpulkan data dengan tipe data yang berbeda (record dalam pascal)
//cara mendeklarasikan struct
struct Alamat{
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; //nested struct
};

int main(){
    system("cls");
    Mahasiswa mhs1; //untuk mengakses struct

    //mengisi data sesuai dengan tipe data pada struct:
    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20155; 

    //menampilkan data yang ada pada struct tadi
    // cout<<"Alamat : "<<mhs1.alamat.jalan<<" "<<mhs1.alamat.kota<<" "<<mhs1.alamat.kodePos<<endl;

    //menggunakan struct dalam vector
    vector<Mahasiswa>mahasiswa; 
    int n;
    cout<<"Masukkan banyak mahasiswa : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Mahasiswa "<<i+1<<endl;
        
        cin.get();
        cout<<"Masukkan nama :";
        getline(cin, mhs1.nama);

        cout<<"Masukkan umur :";
        cin>>mhs1.umur;

        cout<<"masukkan ipk:";
        cin>>mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for(int i=0;i<n;i++){
        cout<<"Mahasiswa "<<i+1<<endl;
        cout<<"Nama : "<<mahasiswa[i].nama<<endl;
        cout<<"Umur : "<<mahasiswa[i].umur<<endl;
        cout<<"IPK : "<<mahasiswa[i].ipk<<endl;
    }
}
