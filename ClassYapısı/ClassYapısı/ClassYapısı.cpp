#include <iostream>
#include<stdlib.h>
#include<windows.h>
/*
class evplani {
private:
	string kasaSifresi;
public:
	string duvarrengi;
	int odasayisi;
	void sifrebelirleme(string yenisifre) {
		if (yenisifre.length() >= 4) {
			kasaSifresi = yenisifre;
			cout << "Kasa sifresi guvenle kaydedildi \n\n";
		}
	}
};


int main()
{
	evplani evplanim;
	evplanim.duvarrengi = "yesil";
	evplanim.odasayisi = 3;
	evplanim.sifrebelirleme("2536");
	cout << "Evin plani: renk => " << evplanim.duvarrengi << "\nodasayisi => " << evplanim.odasayisi<<"\n";

	evplani evplanim2;
	evplanim2.duvarrengi = "mavi";
	evplanim2.odasayisi = 5;
	evplanim2.sifrebelirleme("2536");
	cout << "Evin plani: renk => " << evplanim2.duvarrengi << "\nodasayisi => " << evplanim2.odasayisi<<"\n";
}
*/

/*
class galeri {

public:
	string marka;
	string model;
	string uretimyili;

};
int main() {
	galeri car1;
	galeri car2;

	car1.marka = "BMW";
	car1.model = "X5";
	car1.uretimyili = "1999";

	cout << "Marka => " << car1.marka << "  /  Model => " << car1.model << "  /  Urerimyili => " << car1.uretimyili << "\n";

	car2.marka = "Ford";
	car2.model = "Mustang";
	car2.uretimyili = "1969";

	cout << "Marka => " << car2.marka << "  /  Model => " << car2.model << "  /  Urerimyili => " << car2.uretimyili << "\n";
}
*/

/*
class akillitelefon {
public:
	string marka;
	int sarjseviyesi;
	akillitelefon(string telefonmarkasi) {
		marka = telefonmarkasi;
		sarjseviyesi = 50;
		cout << marka << " telefonu uretildi sarj seviyesi: " << sarjseviyesi<<"\n";
	}
	~akillitelefon() {
		cout << "Telefonun omru tamamlandi bellek temizleniyor...\n";
	}
};
int main() {
	{
		akillitelefon tel("Iphone");
	}
}
*/

class ogrenci {
public:
	std::string ogrenciadi;
	int notu;
	ogrenci(std::string ad, int puan) {
		notu = puan;
		ogrenciadi = ad;
		std::cout << "Ogrenci Adi: " << ogrenciadi << "\nOgrenci Notu: " << notu << "\n";
	}
	~ogrenci() {
		std::cout << "Islem tamamlandi ogrenci siliniyor...\n";
		Sleep(1500);
		std::cout << "Ogrenci silindi...\n";
	}
};
int main() {
	srand(time(NULL));

	{
		ogrenci ogr("Veysel", rand() % 101);
	}
}


