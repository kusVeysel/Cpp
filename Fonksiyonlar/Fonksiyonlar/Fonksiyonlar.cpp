using namespace std;

#include<iostream>
#include<stdlib.h>

/*
void bol(int sayi1, int sayi2) {
	float sonuc = (float) sayi1 / sayi2;
	cout << sonuc << "\n";
}
void carp(int sayi1, int sayi2) {
	cout << sayi1 * sayi2<< "\n";
}
void cikar(int sayi1, int sayi2) {
	if (sayi1 >= sayi2) {
		cout << sayi1 - sayi2 << "\n";
	}
	else{
		cout << sayi1 - sayi2 << "\n";
	}
}
void topla(int sayi1,int sayi2) {
	cout << sayi1 + sayi2 << "\n";
}
int main(){
	int sayi1,sayi2;
	cout << "2 sayi giriniz: ";
	cin >> sayi1 >> sayi2;
	topla(sayi1,sayi2);
	cikar(sayi1, sayi2);
	carp(sayi1, sayi2);
	bol(sayi1, sayi2);
}
*/

/*
void fotokopiuzerindekarala(int x) {
	x = 999;
}
void orijinaluzerindekarala(int& x) {
	x = 1;
}
int main() {
	int sayim = 0;
	fotokopiuzerindekarala(sayim);
	cout << "fotokopiuzerindekarala sonra benim sayim: " << sayim << "\n";

	orijinaluzerindekarala(sayim);
	cout << "orijinaluzerindekarala sonra benim sayim: " << sayim << "\n";
}
*/

/*
void gercek(int& notu) {
	notu = 100;
}
void kopya(int notu) {
	int degis;
	cout << "Notu degistir" << "\n";
	cin >> degis;
	cout << "Sahte degisim sonrasi not: " << notu-degis << "\n";
}
int main() {
	srand(time(NULL));
	int notu=rand()%100;
	cout << "Suanki not: " << notu << "\n";
	kopya(notu);
	gercek(notu);
	cout << "Guncel not: " << notu << "\n";
}
*/

/*
void kahveyap(string tur="Sade",int seker=0) {
	cout << tur << " kahveniz " << seker <<" sekerli olarak hazirlandi"<<"\n";
}
int main() {
	kahveyap();
	kahveyap("Sutlu",2);
}
*/


void oyun(string karakter, int seviye) {
	cout << "Karakteriniz: " << karakter << " " << seviye << "\n";
}
int main() {
	string secim,karakter;
	int seviye;

	cout << "Karakter girecek misiniz?";
	cin >> secim;
	while (secim != "Hayir" && secim!= "Evet") {
		cout << "Evet ya da Hayir giriniz: ";
		cin >> secim;
	}
	if (secim == "Evet") {
		cout << "Karakter belirtiniz: ";
		cin >> karakter;
	}
	else {
		karakter = "Savasci";
	}

	cout << "Seviye girecek misiniz?";
	cin >> secim;
	while (secim != "Hayir" && secim != "Evet") {
		cout << "Evet ya da Hayir giriniz: ";
		cin >> secim;
	}
	if (secim == "Evet") {
		cout << "Seviye giriniz: ";
		cin >> seviye;
	}
	else {
		seviye = 1;
	}

	oyun(karakter,seviye);
}
