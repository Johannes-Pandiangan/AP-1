#include<iostream>
using namespace std;

class ContohAkses {
    private: //hanya bisa diakses oleh anggota dalam class yang sama
        int privateVar;
    protected: //bisa diakses pada class yang sama dan class turunannya
        int protectedVar;
    public: //dapat diakses pada berbagai class
        int publicVar;

    //constructor
    ContohAkses(){
        privateVar =1;
        protectedVar=2;
        publicVar=3;
    }

    //dapat mangakses semua jenis class 
    void tampilkanSemua(){
        cout << "Akses dari dalam class : "<<endl;
        cout << privateVar<<endl;
        cout << protectedVar<<endl;
        cout << publicVar<<endl;
    }
};

class Turunan : public ContohAkses {
    public:
    void aksesProtected(){
        cout<<protectedVar <<endl;
        cout<<publicVar<<endl;
        //cout<<privateVar<<endl; ,tidak bisa mengakses class private pada class turunan
    }
};

int main(){
    system("cls");
    ContohAkses obj;
    obj.tampilkanSemua();

    cout<<"\nAkses dari luar class: "<<endl;\
    //cout<< obj.privateVAr <<endl;, class private tidak dapat diakses dari class luar
    //cout << obj.protectedVar <<endl;, class protected juga tidak dapat diakses 
    cout << obj.publicVar <<endl; //class public dapat diakses, karena seperti penjelasan diatas (dapat diakses oleh semua class)

    //yang dapat diakses pada class turunan adalah protected dan public
    cout<<"\nAkses dari kelas turunan : "<<endl; 
    Turunan tur;
    tur.aksesProtected();
}
