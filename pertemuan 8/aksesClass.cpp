#include<iostream>
using namespace std;

class ContohAkses {
    private:
        int privateVar;
    protected:
        int protectedVar;
    public:
        int publicVar;

    //constructor
    ContohAkses(){
        privateVar =1;
        protectedVar=2;
        publicVar=3;
    }

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
        //cout<<privateVar<<endl;
    }
};

int main(){
    system("cls");
    ContohAkses obj;
    obj.tampilkanSemua();

    cout<<"\nAkses dari luar class: "<<endl;\
    //cout<< obj.privateVAr <<endl;
    //cout << obj.protectedVar <<endl;
    cout << obj.publicVar <<endl;

    cout<<"\nAkses dari kelas turunan : "<<endl;
    Turunan tur;
    tur.aksesProtected();
}