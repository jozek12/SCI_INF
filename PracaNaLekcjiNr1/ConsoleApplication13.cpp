#include <iostream>
#include <string>
#include "klucz.h"
#include "szyfrowaniecezara.h"
using namespace std;
szyfrowaniecezara cezar;
klucz key;

int main()
{
	string tekst, tekst2, tekst3;
	int d;
	int a;
	int c = 1;
	cout << "podaj ciag znakow(z malych liter)" << endl;
	getline(cin, tekst);
	while (c == 1)
	{
		cout << "podaj opcje szyfrowania:\n1. szyfr podstawieniowy\n2. Szyfr przestawieniowy \n3. Szyfr podstawieniowy i szyfr przestawieniowy. \n4. Odszyfruj teskt.\n5. stworz klucz";
		cin >> a;
		if (a == 1)
		{
			cout << "podaj liczbe do podstawiania:(do 26)" << endl;
			cin >> d;
			tekst2 = cezar.podstawieniowy(tekst, d, tekst3);
			cout << "zaszyfrowany tekst to:" << tekst2 << endl;
		}
		else if (a == 2)
		{
			tekst2 = cezar.przestawieniowy(tekst);
			cout << "zaszyfrowany tekst to:" << tekst2 << endl;
		}
		else if (a == 3)
		{
			cout << "podaj liczbe do podstawiania:(do 26)" << endl;
			cin >> d;
			tekst2 = cezar.podstawieniowy(tekst, d, tekst3);
			tekst2 = cezar.przestawieniowy(tekst2);
			cout << "zaszyfrowany tekst to:" << tekst2 << endl;
		}
		else if (a == 4)
		{

			cezar.deszyfrowanie_cezara(tekst2, d, tekst3);
		}
		else if (a == 5) {
			key.tworz();
		}
	}
}
