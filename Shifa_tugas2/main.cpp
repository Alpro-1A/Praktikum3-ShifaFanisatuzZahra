#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Angka Terbesar" << endl;
    cout << "--------------" << endl;
    cout << "Masukkan nilai A:";cin >>a;
    cout << "Masukkan nilai B:";cin >>b;
    cout << "Masukkan nilai C:";cin >>c;
    cout << "---------------" << endl;

    cout << "Angka terbesar adalah :";

    if (a>b && a>c){
        cout << a << endl;
    }
    else if (b>a && b>c){
        cout << b << endl;
    }
    else if (c>a && c>b){
        cout << c << endl;
    }
    return 0;
}
