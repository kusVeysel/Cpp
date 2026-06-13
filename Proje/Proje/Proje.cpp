using namespace std;

#include <iostream>
#include<string.h>
#include<vector>
#include<fstream>
#include<sstream>

class Film {
public:
	int ID;
	string ad;
	string tur;
	int sure;
	Film(int ID, string ad, string tur, int sure): ID(ID), ad(ad), tur(tur), sure(sure) {
	}
};

class Seans {
public:
	int ID;
	int filmID;
	string gunSaat;
	int salonNo;
	int bosKoltuklar;
	Seans(int ID,int filmID,string gunSaat,int salonNo,int bosKoltuklar): ID(ID), filmID(filmID), gunSaat(gunSaat), salonNo(salonNo), bosKoltuklar(bosKoltuklar) {
	}
};

class SinemaSistemi {
public:
	void filmleriYukle() {
		filmler.clear();
		ifstream dosya("Filmler.txt");
		if (!dosya.is_open()) return;

		string satir;
		while (getline(dosya, satir)) {
			stringstream ss(satir);
			string idStr, ad, tur, sureStr;

			getline(ss, idStr, ',');
			getline(ss, ad, ',');
			getline(ss, tur, ',');
			getline(ss, sureStr, ',');

			if (idStr.empty()) {
				filmler.push_back(Film(stoi(idStr), ad, tur, stoi(sureStr)));
			}
		}
		dosya.close();
	}

	void seanslariYukle() {
		seanslar.clear();
		ifstream dosya("Seanslar.txt");
		if (!dosya.is_open()) return;

		string satir;
		while (getline(dosya, satir)) {
			stringstream ss(satir);
			string idStr, filmIDStr, gunSaat, salonStr, koltukStr;

			getline(ss, idStr, ',');
			getline(ss, filmIDStr, ',');
			getline(ss, gunSaat, ',');
			getline(ss, salonStr, ',');
			getline(ss, koltukStr, ',');

			if (!idStr.empty()) {
				seanslar.push_back(Seans(stoi(idStr), stoi(filmIDStr), gunSaat, stoi(salonStr), stoi(koltukStr)));
			}
		}
		dosya.close();
	}
	void filmleriKaydet() {
		ofstream dosya("Filmler.txt");
		for (const auto& f : filmler) {
			dosya << f.ID << "," << f.tur << "," << f.sure << "\n";
		}
		dosya.close();
	}
	void seanslariKaydet() {
		ofstream dosya("Seanslar.txt");
		for (const auto& s : seanslar) {
			dosya << s.ID << "," << s.filmID << "," << s.gunSaat << "," << s.salonNo <<"," << s.bosKoltuklar << "\n";
		}
		dosya.close();
	}
	void filmEkle(Film yenifilm) {
		filmler.push_back(yenifilm);
		filmleriKaydet();
	}
	void seansEkle(Seans yeniSeans) {
		seanslar.push_back(yeniSeans);
		seanslariKaydet();
	}
	void filmleriListele() {
		cout << "\n---VIZYONDAKI FILMLER---\n";
		if (filmler.empty()) {
			cout << "Henuz film yuklenmedi\n";
			return;
		}
		for (const auto& f : filmler ) {
			cout << "ID: " << f.ID << "| Ad: " << f.ad << "| Tur: " << f.tur << "| Sure: " << f.tur << "\n";
		}
	}
	void seanslariListele() {
		cout << "\n---AKTIF SEANSLAR---\n";
		if (seanslar.empty()) {
			cout << "Henuz seans yuklenmedi\n";
			return;
		}
		for (const auto& s : seanslar) {
			cout << "ID: " << s.ID << "| FilmID: " << s.filmID << "| Zaman: " << s.gunSaat << "| BosKoltuklar: " << s.bosKoltuklar <<"| SalonNO:" << s.salonNo << "\n";
		}
	}

private:
	vector<Film> filmler;
	vector<Seans> seanslar;

};


int main() {
	SinemaSistemi sistem;

	sistem.filmleriYukle();
	sistem.seanslariYukle();

	cout << "Sisteme test verileri ekleniyor...\n";
	sistem.filmEkle(Film(1, "Inception", "Sci-Fi",148));
	sistem.filmEkle(Film(2, "Interstellar", "Sci-Fi",169));
	
	sistem.seansEkle(Seans(101,1, "Cuma 19:00", 3,50));
	sistem.seansEkle(Seans(102,2, "Cumartesi 21:00", 1,50));

	sistem.filmleriListele();
	sistem.seanslariListele();

	cout << "\n[OK] Std: Kalipleri temizledi ve ilk gun altyapisi hazir!\n";
}