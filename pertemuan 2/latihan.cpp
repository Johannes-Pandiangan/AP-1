#include <iostream>
using namespace std;

int main()
{
    system("cls");
    const float phi=3.14;
    float r,volume,luas;
    cout<<"masukkan jari-jari: ";
    cin>>r;

    volume=((float)4/(float)3)*phi*r*r*r;
    luas=4*phi*r*r;

    cout<<"volume bola= "<<volume<<endl;
    cout<<"luas permukaan bola= "<<luas<<endl;
}