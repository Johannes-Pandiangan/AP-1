#include<iostream>
#include<string>
#include<array>
using namespace std;

int main()
{
    system("cls");
    //array declaration & initialization
    /* 2 cara membuat array */

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

    //Asending Element in Array
    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;

    // Menggunakan Looping
    // for (int i=0;i<5;i++){
    //     cout<<nama[i]<<endl;
    // }

    //Descending element in array use looping
    // for (int i=4;i>=0;i--){
    //     cout<<nama[i]<<endl;
    // }

    //Multidemensional Array
    // 1 2 3
    // 2 4 6

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
    // cout<<nama[2]<<endl;

    // for (int i=0;i<nama.length();i++){
    //     cout<<nama[i]<<endl;
    // }

    // string s1 = "Hello";
    // string s2 = "world";

    /*1.s1 =s2*/
    // s1=s2;
    // cout<<"s1 = "<<s1<<endl;

    /*2.Menggabungkan s1=s1+s2*/
    //cout<<"Hasil : "<<s1+s2<<endl;

    /*3.s1.length()*/
    //cout<<s1.length()<<endl;
    //cout<<(s1+s2).length()<<endl;

    /*4. s1.substring(n,m)*/
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

    //Array Library
    // array<float, 5> nilai = {87.2, 90, 100, 95.7, 78.5};
    // cout<<"Nilai : ";
    // for (int i=0;i<nilai.size();i++){
    //     cout<<nilai[i]<<" ";
    // }

    // for (float n:nilai){
    //     cout<<n<<" ";
    // }

    
}