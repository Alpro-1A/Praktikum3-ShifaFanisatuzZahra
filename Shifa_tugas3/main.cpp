#include <iostream>

using namespace std;

int main()
{
    int kode;
     cout << "1.Menghitung luas persegi" << endl;
     cout << "2.Menghitung luas persegi panjang" << endl;
     cout << "3.Menghitung luas segitiga" << endl;
     cout << "---------------------------------" << endl;

     cout << "Masukan kode (1/2/3):";cin >> kode;
     cout << "----------------------" << endl;

     switch (kode){
        case 1:{
        double sisi, luas;
        cout << "Masukkan panjang sisi :"; cin >> sisi;
        luas = sisi*sisi;
        cout << "-----------------------" << endl;
        cout << "Luas persegi adalah :"<<luas<<endl;
        break;
        }
        case 2:{
        double panjang, lebar,luas;
        cout << "Masukkan nilai panjang :"; cin >> panjang;
        cout << "Masukkan nilai lebar :"; cin >> lebar;
        luas = panjang*lebar;
        cout << "-----------------------------" << endl;
        cout << "Luas persegi panjang adalah :"<<luas<<endl;
        break;
        }
        case 3:{
        double alas, tinggi, luas;
        cout << "Masukkan alas segitiga :"; cin >> alas;
        cout << "Masukkan tinggi segitiga:"; cin >> tinggi;
        luas = alas*tinggi/2;
        cout << "-------------------------" << endl;
        cout << "Luas segitiga adalah :"<<luas<<endl;
        break;
        }
        }
    return 0;
}
