using namespace std;
#include <iostream>

int main()
{

#pragma region Aylar
	/*
	int ay;
	bas:
	cout << "Ay giriniz(1-12): ";
	cin >> ay;
	switch (ay)
	{
	case 1:
		cout << "Ocak";
		break;
	case 2:
		cout << "Subat";
		break;
	case 3:
		cout << "Mart";
		break;
	case 4:
		cout << "Nisan";
		break;
	case 5:
		cout << "Mayis";
		break;
	case 6:
		cout << "Haziran";
		break;
	case 7:
		cout << "Temmuz";
		break;
	case 8:
		cout << "Agustos";
		break;
	case 9:
		cout << "Eylul";
		break;
	case 10:
		cout << "Ekim";
		break;
	case 11:
		cout << "Kasim";
		break;
	case 12:
		cout << "Aralik";
		break;
	default:
		cout << "Yanlis sayi girdiniz \n";
		cout << "Tekrar giriniz:";
		goto bas;
		break;
	}
	*/
#pragma endregion

#pragma region OkulSistem
	/*
	int secim,number;
	string tc, oNo;
	cout << "Menuyu seciniz\n1)Ogrenci isleri\n2)Ogretmen isleri\n3)Programdan cik\n";
	cin >> secim;
	while (secim != 1 && secim != 2 && secim != 3)
	{
		cout << "Belirtiler islemi seciniz\n";
		cin >> secim;
	}
	switch (secim)
	{
	case 1:
		cout << "Ogrenci no giriniz: ";
		cin >> oNo;
		cout << "TC giriniz: ";
		cin >> tc;
		cout << "Giris basarili!\n";
		break;
	case 2:
		cout << "Numarayi giriniz";
		cin >> number;
		cout << "TC giriniz: ";
		cin >> tc;
		cout << "Giris basarili!\n";
		break;
	case 3:
		cout << "Cikis yapiliyor...\n";
		break;
	default:
		break;
	}
	cout << "Iyi gunler!";
	*/
#pragma endregion

#pragma region Carpim
	/*
	int bir;
	int sayi;
	for (int sayi = 0; sayi < 10; sayi++)
	{
		for (int bir = 0; bir < 10; bir++)
		{
			cout << sayi << " * " << bir << " = " << sayi * bir << "\n";
		}
		cout << "\n";
	}
	*/
#pragma endregion

#pragma region Yemek Siparis

	float KDV, indirim;
	int secim;
	int fiyat = 0;
	int adet = 1;
	cout << "Restoran Menusu\n1)Iskender 300TL\n2)Doner  150TL\n3)Lahmacun 20TL\n4)Pizza 270TL\n5)Haslama 180TL\n6)Ayran 35TL\n7)Kola 75TL\n8)Su 10TL\n9)Gazoz 30TL\n";
	while (adet != 0)
	{
		cout << "Siparisinizi veriniz: ";
		cin >> secim;
		switch (secim)
		{
		case 1:
			fiyat += 300;
			break;
		case 2:
			fiyat += 150;
			break;
		case 3:
			fiyat += 20;
			break;
		case 4:
			fiyat += 270;
			break;
		case 5:
			fiyat += 180;
			break;
		case 6:
			fiyat += 35;
			break;
		case 7:
			fiyat += 75;
			break;
		case 8:
			fiyat += 10;
			break;
		case 9:
			fiyat += 30;
			break;
		default:
			cout << "Menuye uygun giriniz\n";
			break;
		}
		cout << "Baska var mi?(0-1): ";
		cin >> adet;
		while (adet != 0 && adet != 1)
		{
			cout << "Uygun rakami giriniz: ";
			cin >> adet;
		}
	}

	cout << "Ara toplam: " << fiyat << "\n";
	KDV = 0.1 * fiyat;
	cout << "KDV'li Tutar: " << KDV << "\n";
	if (fiyat > 1000) {
		cout << "1000TL uzeri harcama yaptiginiz icin indirim kazandiniz!\n";
		indirim = fiyat * 0.85;
		cout << "Genel toplam: " << indirim + KDV << "\n";
	}
	else {
		cout << "Genel toplam: " << fiyat + KDV << "\n";
	}
#pragma endregion

}
