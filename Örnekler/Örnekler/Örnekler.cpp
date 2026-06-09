using namespace std;
#include <iostream>

int main()
{

#pragma region toplama
    /*
   int sayi,top=0;
   cout << "sayi giriniz: ";
   cin >> sayi;
   for (int i = 0; i <= sayi; i++)
   {
       top +=i;
   }
   cout << "sonuc: " << top;
   */
#pragma endregion


#pragma region 2 sayi arasinin toplanmasi
   /*
   int sayi1, sayi2, toplam = 0;
   cout << "Birinci sayiyi giriniz";
   cin >> sayi1;
   cout << "Ikinici sayiyi giriniz";
   cin >> sayi2;

   if (sayi2 > sayi1) {
       for (sayi1; sayi1 <= sayi2;sayi1++)
       {
           toplam += sayi1;
       }
       cout << "sonuc: " << toplam;
   }
   else{
       for (sayi2; sayi1 >= sayi2;sayi2++)
       {
           toplam += sayi2;
       }
       cout << "sonuc: " << toplam;
   }
   */
#pragma endregion


#pragma region Sinema Tiyatro
   /*
   int sineme = 15, tiyatro = 10, adet;
   bool ogrenci;
   string secim;

   cout << "ogrenci misiniz?(1/0)";
   cin >> ogrenci;
   cout << "Kac adet bilet alacaksiniz?";
   cin >> adet;
   bas:
   cout << "Tiyatro mu? Sinema mi?";
   cin >> secim;


   if (ogrenci) {
       if (secim == "tiyatro") {
           cout << tiyatro * adet * 0.5 << "TL";
       }
       else if(secim=="sinema") {
           cout << sineme * adet * 0.5 << "TL";
       }
       else {
           cout << "sinema ya da tiyatro yaziniz";
           goto bas;
       }
   }
   else{
       if (secim == "tiyatro") {
           cout << tiyatro * adet << "TL";
       }
       else if(secim == "sinema") {
           cout << sineme * adet << "TL";
       }
       else {
           cout << "sinema ya da tiyatro yaziniz";
           goto bas;
       }
   }
   */
#pragma endregion


#pragma region mayin oyunu
		/*
		int sayi;
		string degis;
		geri:
		cout << "tek mi oynamak istiyorsunuz cift mi? ";
		cin >> degis;
		if (degis != "tek" && degis != "cift") {
			goto geri;
		}
		cout << "sayi giriniz: ";
		cin >> sayi;
		if (degis == "tek") {
			while (sayi % 2 != 0)
			{
				cout << "patlamadiniz devam: ";
				cin >> sayi;
			}
		}
		else {
			while (sayi % 2 == 0)
			{
				cout << "patlamadiniz devam: ";
				cin >> sayi;
			}
		}
		cout << "GAME OVER";
		*/
#pragma endregion


#pragma region Sayi tahmin
		/*
		int ram = 67;
		int secim;
		int hak=5;
		do {
			cin >> secim;
			if (secim == 5) {
				break;
			}
			if(secim==1000){
			cout << "Hile kodunu girdiniz ,Kazandiniz!!\n";
			break;
			}
			cout << "Tekrar deneyiniz \n";
			if (secim > ram) {
				cout << "ipucu: assagi\n";
			}
			else {
				cout << "ipucu: yukari\n";
			}
			hak--;
		}
		while (hak!=0);
		if (hak == 0) {
			cout << "Kaybettiniz dogru cevap: " << ram << "\n";
		}
		else {
			cout << "Afferim la\n";
		}
		*/
#pragma endregion


#pragma region Bankamatik

		float para = 999.99, miktar;
		int secim;
		bool cikis;
		cout << "Isleminizi seciniz: ";
		cout << "\n" << "Para yatirmak icin 1" << "\n" << "Para cekmek icin 2" << "\n" << "Cikis yapmak icin 3" << "\n" << "Bakiyeyi goruntulemek icin 4" << "\n";
		cin >> secim;
		while (secim != 3)
		{
			if (secim == 1) {
				cout << "Yatirmak istediginiz para miktarini giriniz: ";
			topla:
				cin >> miktar;
				if (miktar > 0) {
					para += miktar;
				}
				else {
					cout << "Gecerli miktar giriniz!! ";
					goto topla;
				}
			}
			else if (secim == 2) {
				cout << "Cekmek istediginiz para miktarini giriniz: ";
			cikar:
				cin >> miktar;
				if (miktar > 0) {
					para -= miktar;
				}
				else {
					cout << "Gecerli miktar giriniz!!  ";
					goto cikar;
				}
			}
			else if (secim == 4) {
				cout << "Guncel bakiyyeniz: " << para << "\n";
			}

			cout << "Cikis yapmak istiyor musunuz?(0/1) ";
			cin >> cikis;
			if (cikis) {
				break;
			}
			else {
				cout << "Islem seciniz: ";
				cin >> secim;
			}
		}
		cout << "Hoscakalin...";
#pragma endregion

}