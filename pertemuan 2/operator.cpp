#include<iostream>
using namespace std;

int main(){
    int a,b;
    system("cls");

    //assigment operator, memberikan nilai pada suatu variabel
    a=3;
    b=5;

    /*
    //arithmetical operator(+, -, /, *, %), operator untuk operasi matematika
    int tambah =a+b;
    int kurang = a-b;
    int kali = a*b;
    float bagi = (float)a/(float)b; //type casting
    int modulo = a%b;

    cout<<"hasil penjumlahan : "<<tambah<<endl;
    cout<<"hasil pengurangan : "<<kurang<<endl;
    cout<<"hasil perkalian : "<<kali<<endl;
    cout<<"hasil pembagian : "<<bagi<<endl;
    cout<<"hasil sisa bagi : "<<modulo<<endl;*/

    /*
    //relational operator, operator untuk membandingkan nilai dari 2 operand
    cout<<(a==b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a!=b)<<endl;*/
    
    /*
    //logical operator(&&,||,!), operator untuk membandingkan 2 variabel bertipe boolean
    cout<<(true && true)<<endl;
    cout<<(true && false)<<endl;
    cout<<(false && true)<<endl;
    cout<<(false && false)<<endl;*/

    /*cout<<(true || true)<<endl;
    cout<<(true || false)<<endl;
    cout<<(false || true)<<endl;
    cout<<(false || false)<<endl;
    cout<<!true<<endl;
    cout<<!false<<endl;*/

    /*//bitwise operator (&,|,^, ~, <<, >>), operator untuk operasi biner
    cout<<(5%7)<<endl;
    cout<<(5|7)<<endl;
    cout<<(5^7)<<endl;
    cout<<(~7)<<endl;
    cout<<(7<<2)<<endl;
    cout<<(7>>2)<<endl;*/

    /*//Shorthand -> cara singkat dalam penulisan kode operasi
    // a+=7 --> a=a+7
    a+=7; //a=a+7
    cout<<a<<endl;

    a-=7; //a=a-7
    cout<<a<<endl;

    a*=7; //a=a*7
    cout<<a<<endl;

    a/=7; //a=a/7
    cout<<a<<endl;*/

    //increment & decrement
    //pre increment, penjumlahan 1 dan langsung berubah pada saat ditampilkan
    cout<<a<<endl;
    cout<<++a<<endl;
    cout<<b<<endl;
    cout<<++b<<endl;

    //post increment, 
    /*penjumlahan 1 tapi tidak langsung berubah saat ditampilkan 
    melainkan menyimpan nilai itu dan akan berubah pada saat penampilan berikutnya*/
    cout<<a<<endl;
    cout<<a++<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<b++<<endl;
    cout<<b<<endl;

    //pre decrement, pengurangan 1 dan langsung berubah pada saat ditampilkan
    cout<<a<<endl;
    cout<<--a<<endl;
    cout<<b<<endl;
    cout<<--b<<endl;

    //post decrerment
     /*penjumlahan 1 tapi tidak langsung berubah saat ditampilkan 
    melainkan menyimpan nilai itu dan akan berubah pada saat penampilan berikutnya*/
    cout<<a<<endl;
    cout<<a--<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<b--<<endl;
    cout<<b<<endl;

}
