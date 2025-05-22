#include<iostream>
using namespace std;
int main()
{
    int nilai;
    system("cls");

    cout<<"Masukkan nilai: ";
    cin>>nilai;

    /*
    //if statement, menjalankan program menurut kondisi yang diinginkan
    if (nilai <= 65){
        cout<<"Anda tidak lulus"<<endl;
    }

    //if-else, menjalankan program menurut kondisi yang diinginkan, tetapi akan menjalankan program lain jika kondisi tak terpenuhi
    if (nilai <= 65){
        cout<<"Anda tidak lulus"<<endl;
    }
    else {
        cout<<"Anda lulus !"<<endl;
    }

    //if else if statement, untuk yang memiliki kondisi lebih dari satu
    if (nilai == 100){
        cout<<"Anda kece!"<<endl;
    }
    else if (nilai <= 65){
        cout<<"Anda tidak lulus"<<endl;
    }
    else {
        cout<<"Anda lulus"<<endl;
    }

    //nested if, if didalam if 
    if (nilai <= 65){
        cout<<"Anda tidak lulus"<<endl;
    }
    else{
        if (nilai == 100) {
            cout<<"Anda lulus dan anda kece !"<<endl;
        }  else{
            cout<<"Anda lulus"<<endl;
        }
    }

    //switch case, digunakan ketika terlalu banyak kondisi (lebih efektif dibanding if, jika kondisinya sangat banyak)
    switch (nilai){
        case 1:
            cout<< "Senin" <<endl;
            break;
        case 2:
            cout<< "Selasa" <<endl;
            break;
        case 3:
            cout<< "Rabu" <<endl;
            break;
        case 4:
            cout<< "Kamis" <<endl;
            break;
        case 5:
            cout<< "Jumat" <<endl;
            break;
        case 6:
            cout<< "Sabtu" <<endl;
            break;
        case 7:
            cout<< "Minggu" <<endl;
            break;
        default: 
            cout<<"Inputan tidak valid"<<endl;
            break;
    }

    //switch range, sama seperti switch case, beda cuma ini merupakan rentang nilai
    switch (nilai) {
        case 85 ...100 : cout << "A" <<endl;break;
        case 80 ... 84 : cout << "B+" <<endl;break;
        case 75 ... 79 : cout << "B" <<endl;break;
        case 70 ... 74 : cout << "C+" <<endl;break;
        case 65 ... 69 : cout << "C" <<endl;break;
        case 60 ... 64 : cout << "D" <<endl;break;
        default: cout<<"E"<<endl;break;
    }

    //ternary operator, operator yang melibatkan 3 operand
    if (nilai % 2 == 0){
        cout<<"Genap nich"<<endl;
    } else {
        cout<<"Ganjil alamak"<<endl;
    }*/

    string checkNum = (nilai % 2 == 0) ? "Genap":"Ganjil";
    cout<<nilai<<" tuh bilangan "<<checkNum<<endl;
}
