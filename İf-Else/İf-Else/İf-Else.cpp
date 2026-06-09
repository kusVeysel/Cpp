#include <iostream>
using namespace std;
int main()
{
#pragma region VKI
	/*
	double vki, boy, kilo;
	cout << "Boyunuzu giriniz(metre cinsinden)";
	cin >> boy;
	cout << "Kilonuzu giriniz(kg olarak)";
	cin >> kilo;
	vki = kilo / (boy * boy);
	if (vki < 25 && vki >= 18) {
		cout << vki << " normalsiniz";
	}
	else if (vki >= 25 && vki < 30) {
		cout << vki << " kilolusunuz";
	}
	else if (vki >= 30 && vki < 35) {
		cout << vki << " obezsiniz";
	}
	else if (vki >= 35) {
		cout << vki << " ciddi obezsiniz";
	}
	else {
		cout << vki << " zayifsiniz";
	}
	*/
#pragma endregion

#pragma region Ehliyet
	/*
	int yas;
	bool rapor, egitimBilgisi;
	cout << "yasinizi giriniz";
	cin >> yas;
	cout << "Lise mezunu musunuz?(0 ya da 1)";
	cin >> egitimBilgisi;
	cout << "Saglik raporunuz var mi?(0 ya da 1)";
	cin >> rapor;
	if (rapor) {
		if (egitimBilgisi) {
			if (yas >= 18) {
				cout << "Ehliyet alabilirsiniz";
			}
			else {
				cout << "18 yas ustu ehliyet alabilir";
			}
		}
		else {
			cout << "Ehliyet icin lise mezunu olmaniz gerekmektedir";
		}
	}
	else {
		cout << "Ehliyet icin saglik raporunuz olmasi gerekmektedir";
	}
	*/
#pragma endregion

#pragma region For
	/*
	int tek=0,cift=0;

	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0) {
			cift += i;
		}
		else {
			tek += i;
		}
	}
	cout << tek << "\n" << cift;
	*/

	for (int i = 1; i < 100; i++)
	{
		if (i % 15 == 0) {
			cout << i << "\n";
		}
	}
#pragma endregion

}

