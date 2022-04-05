#include <iostream>

using namespace std;

int main()
{
    string aritmatika;
    float bilanganPertama;
    float bilanganKedua;
    float hasil;

    cout << "bilangan pertama : "; cin >> bilanganPertama;
    cout << "aritmatika (+, -, *, /): "; cin >> aritmatika;
    cout << "bilangan kedua : "; cin >> bilanganKedua;


    if (aritmatika == "+"){
        hasil = bilanganPertama + bilanganKedua;
        cout << bilanganPertama << " " << aritmatika << " " << bilanganKedua << " = " << hasil <<endl;

    }else if (aritmatika == "-"){
        hasil = bilanganPertama - bilanganKedua;
        cout << bilanganPertama << " " << aritmatika << " " << bilanganKedua << " = " << hasil <<endl;

    }else if (aritmatika == "*"){
        hasil = bilanganPertama * bilanganKedua;
        cout << bilanganPertama << " " << aritmatika << " " << bilanganKedua << " = " << hasil <<endl;

    }else if (aritmatika == "/") {
        hasil = bilanganPertama + bilanganKedua;
        cout << bilanganPertama << " " << aritmatika << " " << bilanganKedua <<"=" << hasil <<endl;
    }



    return 0;
}
