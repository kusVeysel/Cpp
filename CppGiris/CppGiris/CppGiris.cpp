#include <iostream>
using namespace std; //bunu ekleyince "std::" yazmaya gerek kalmaz

int main()
{
    string isim;
    int a;
    std::cout << "Hello World!\n";
    cout << "isminizi giriniz: ";
    cin >> isim;
    cout << "merhaba " + isim;
    cout << "\nsayi giriniz: ";
    cin >> a;
    cout << a << "\n";

    int sayi1, sayi2;
    cin >> sayi1;
    cin >> sayi2;
    
    if (sayi1 > sayi2) 
    {
        cout << sayi1 / sayi2 << "\n";
    }
    else 
    {
        cout << sayi2 / sayi1 << "\n";
    }

    cout << sayi1 + sayi2 << "\n";
    cout << sayi1 - sayi2 << "\n";
    cout << sayi1 * sayi2 << "\n";

    int sayi;
    cin >> sayi;
    if (sayi > 0) {
        cout << "pozitif";
    }
    else if (sayi == 0) {
        cout << "sifir";
    }
    else {
        cout << "negatif";
    }
    
    if (sayi % 2 == 0) {
        cout << "sayi cift" <<"\n";
    }
    else {
        cout << "sayi tek" << "\n";
    }

    int vize;
    int final;
    cout << "vize notunu giriniz";
    cin >> vize;
    cout << "final notunu giriniz";
    cin >> final;
    vize *= 0.4;
    final *= 0.6;
        if ((vize + final) >= 50) {
            cout << "gecti not:" << vize+final;
        }
        else {
            cout << "kaldi not:" << vize+final;
        }

        string Kadi = "Admin";
        int sifre = 1234;
        string Kadi2;
        int sifre2;
        cin >> Kadi2;
        cin >> sifre2;
        if (sifre == sifre2) {
            if (Kadi == Kadi2) {
                cout << "giris basarili";
            }
            else {
                cout << "kullanici adi yanlis";
            }
        }
        else {
            cout << "sifre yanlis";
        }
}
/*
cout <<: ekrana yazdırmak için(printf gibi)
cin >>: veri girişi için(scanf gibi)

*/