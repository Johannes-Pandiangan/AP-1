#include<iostream>
using namespace std;

void penjumlahan(int a,int b){
    cout<<a+b<<endl;
}

void penjumlahanpointer(int *a,int *b){ //fungsi yang menggunakan pointer
    *a += *b;
    cout<<*a<<endl;
}

int main()
{
    system("cls");
    //pointer adalah variabel yang menyimpan alamat memori dan variabel lain
    //pointer declaration
    int number=35; //var biasa
    int *pointer_number= &number; //pointer

    // cout<<"isi variabel number = "<<number<<endl;
    // cout<<"Alamat dari memori variabel number = "<<&number<<endl;
    // cout<<"Isi variabel pointer_number = "<<pointer_number<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_number = "<<*pointer_number<<endl;
    // cout<<"Alamat memori variabel pointer_number = "<<&pointer_number<<endl;

    // pointer operation, operasi pada pointer yang dapat mengubah nilai variabel pointer
    // *pointer_number=25;
    // cout<<"isi variabel number = "<<number<<endl;
    // cout<<"Alamat dari memori variabel number = "<<&number<<endl;
    // cout<<"Isi variabel pointer_number = "<<pointer_number<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_number = "<<*pointer_number<<endl;
    // cout<<"Alamat memori variabel pointer_number = "<<&pointer_number<<endl;

    //pointer in array, pointer digunakan dalam array
    int num[]={1,2,3,4,5};
    int *pointer_num=num;
    // cout<<"isi variabel num = "<<num[0]<<endl;
    // cout<<"Alamat dari memori variabel num = "<<&num[3]<<endl;
    // cout<<"Isi variabel pointer_num = "<<pointer_num<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_num = "<<*pointer_num<<endl;
    // cout<<"Alamat memori variabel pointer_num = "<<&pointer_num<<endl;

    // *pointer_num += 5;
    // cout<<"isi variabel num = "<<num[0]<<endl;
    // cout<<"Alamat dari memori variabel num = "<<&num[3]<<endl;
    // cout<<"Isi variabel pointer_num = "<<pointer_num<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_num = "<<*pointer_num<<endl;
    // cout<<"Alamat memori variabel pointer_num = "<<&pointer_num<<endl;

    //pointer in parameter, pointer digunakan dalam fungsi sebagai parameter
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);
    // cout<<num1<<endl;
    // cout<<num2<<endl;
    // penjumlahanpointer(&num1,&num2);
    // cout<<num1<<endl;
    // cout<<num2<<endl;
    
    //pointer in pointer, pointer digunakan untuk menunjukkan ke pointer yang lainnya
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score; //pointer in pointer
    // cout<<"Isi variabel score = "<<score<<" dan alamat memorinya "<<&score<<endl;
    // cout<<"Isi variabel pointer_score "<<pointer_score<<" dan isi variabel yang ditunjuk oleh pointer_score "<<*pointer_score<<" alamat memori pointer_score "<<&pointer_score<<endl;
    // cout<<"Isi variabel ptr_pointer_score "<<pointer_score<<" dan isi variabel yang ditunjuk oleh ptr_pointer_score "<<**ptr_pointer_score<<" alamat memori ptr_pointer_score "<<&ptr_pointer_score<<endl;

    //dynamic pointer, memungkinkan kita untuk menambah (new) dan/atau menghapus(delete) sesuatu pada pointer
    int *ptr=new int;
    *ptr=30;
    cout<<"Isi variabel ptr "<< *ptr<<" dan alamatnya "<<&ptr<<endl;

    delete ptr; //menghapus nilai *ptr=30;
    cout<<"Isi variabel ptr "<< *ptr<<" dan alamatnya "<<&ptr<<endl;
}
