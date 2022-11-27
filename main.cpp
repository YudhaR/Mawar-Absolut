/*
    Program Mawar Absolut
    Ket : Program untuk mengembalikan nilai negatif menjadi positif/positif menjadi positif
    By  : Yudha Rizqia Grafer
    Tgl : 05 Oktober 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int bilangan;

    //Algoritma
    cout << "Masukan Bilangan : ";
    cin >> bilangan;
    if (bilangan < 0)
    {
        bilangan *= -1 ;
    }
    cout << bilangan << " adalah bilangan positif " << endl;
    cout << "Cek Selesai";
    return 0;
}
