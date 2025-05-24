#include<iostream>
#include<string> //header untuk penggunaan string
#include<array> //header untuk penggunaan array
using namespace std;

int main()
{
    system("cls");
    //array declaration & initialization
    /* 2 cara membuat array */

    //cara mendeklarasikan array
    //cara 1: array kosong
    //string nama[5]; 

    // nama[0] = "Alya";
    // nama[1] = "Parul";
    // nama[2] = "Syukron";
    // nama[3] = "Aurick";
    // nama[4] = "Dzakwan";

    //cara 2: array yang langsung diisi
    //string nama[5] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};
    // string nama[] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};

    //Asending Element in Array, mengakses element array dari depan sesuai index yang diinginkan
    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;

    // Menggunakan Looping, mengakses element array dalam rentang index tertentu
    // for (int i=0;i<5;i++){
    //     cout<<nama[i]<<endl;
    // }

    //Descending element in array use looping, mengakses element array mulai dari belakang
    // for (int i=4;i>=0;i--){
    //     cout<<nama[i]<<endl;
    // }

    //Multidemensional Array
    // 1 2 3
    // 2 4 6

    //membuat matriks dengan menggunakan array
    // int matrix[2][3] ={{1,3,5},{2,4,6}};
    // for (int i=0;i<2;i++){
    //     for (int j=0;j<3;j++){
    //         cout << matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int matrix[4][6]={{1,2,3,4,5,6},{7,8,9,1,1,2},{3,4,5,6,7,8},{9,0,1,2,3,4}};
    // for (int i=0;i<4;i++){
    //         for (int j=0;j<6;j++){
    //             cout << matrix[i][j]<<"\t";
    //         }
    //         cout<<endl;
    //     }

    //string (array of characters)
    //string nama = "Johannes";
    // cout<<nama[0]<<endl;
    // cout<<nama[2]<<endl; //mengakses index tertentu dari string

    // for (int i=0;i<nama.length();i++){
    //     cout<<nama[i]<<endl;
    // } //akses semua index dalam string

    // string s1 = "Hello";
    // string s2 = "world";

    //operasi dan fungsi string
    /*1.s1 =s2*/ //mengubah nilai string s1 menjadi string s2
    // s1=s2;
    // cout<<"s1 = "<<s1<<endl;

    /*2.Menggabungkan s1=s1+s2*/ //menggabungkan 2 string
    //cout<<"Hasil : "<<s1+s2<<endl;

    /*3.s1.length()*/ //mengambil nilai panjang string
    //cout<<s1.length()<<endl;
    //cout<<(s1+s2).length()<<endl;

    /*4. s1.substring(n,m)*/ //mengambil sebagian string dari index ke-n dengan panjang m char
    // cout<<s1.substr(2,3)<<endl;
    // cout<<(s1+s2).substr(5,3)<<endl;

    //operator sizeof() -> untuk tau berapa ukuran dari suatu var(byte)
    // int angka = 10;
    // cout<<sizeof(angka);

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout<<sizeof(nilai);

    //  string s="Johannes";
    // //cout<<sizeof(s);
    // cout<<s.length();

    // string nama_Karyawan[]={"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};
    // int n= sizeof(nama_Karyawan)/sizeof(string);
    // cout<<n<<endl;

    //Array Library, contoh penggunaan array
    // array<float, 5> nilai = {87.2, 90, 100, 95.7, 78.5};
    // cout<<"Nilai : ";
    // for (int i=0;i<nilai.size();i++){
    //     cout<<nilai[i]<<" ";
    // }

    // for (float n:nilai){
    //     cout<<n<<" ";
    // }

    
}
