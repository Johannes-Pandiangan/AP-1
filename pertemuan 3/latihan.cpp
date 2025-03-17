#include<iostream>
using namespace std;

int main()
{
    int bil;
    system("cls");
    cout<<"Masukkan sebuah bilangan bulat"<<endl;
    cin>>bil;

    if (bil % 5 == 0){
        cout<<"Ini adalah bilangan kelipatan 5";
    }
    else if (bil % 10 == 0){
        cout<<"Ini adalah bilangan kelipatan 10";
    }
    else {
        cout<<"ini bukan kelipatan 5 atau 10";
    }
}