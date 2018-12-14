#include <iostream>
using namespace std;
int main ()
{
    float a,b,hasil;
    char aritmatika;
    cout << " SELAMAT DATANG DI PROGRAM KALKULATOR " << endl;
    cout << "Masukan bilangan pertama : " ;
    cin>>a;
    cout<<"Pilih Operator +,-,*,/ : " ;
    cin>>aritmatika;
    cout<<"Masukan bilangan kedua : " ;
    cin>>b;

    cout<<"Hasil Perhitungan : " ;
    cout<< a << hasil << b;

    if (aritmatika == '+') {
        hasil = a + b;
    } else if (aritmatika == '-'){
        hasil = a - b;
    } else if (aritmatika == '*'){
        hasil = a * b;
    } else if (aritmatika == '/'){
        hasil = a / b;
    }

    cout<< " = " << hasil << endl;
    cin.get();
    return 0;

}
