#include <iostream>
#include <string>
using namespace std;
string podstawieniowy(string tekstt)
{
	int d;
	cout << "podaj liczbe do przesuwania:" << endl;
	cin >> d;
	for (int i = 0; i < tekstt.length(); i++)
	{
		if (tekstt[i] > 96 && tekstt[i] < 123)
		{
				tekstt[i] += d;
				if (tekstt[i] > 122)
				{
					tekstt[i] = tekstt[i] % 123 + 97;
				}
		}
	}
	return tekstt;
}
string przestawieniowy(string tekstt)
{
	for (int i = 0; i < tekstt.length() - 1; i += 2)
	{
		swap(tekstt[i], tekstt[i + 1]);
	}


	return tekstt;
}
int main()
{
	string tekst , tekst2;
	int a;
		cout << "podaj ciag znakow(z malych liter)" << endl;
		getline(cin, tekst);
		cout << "podaj opcje szyfrowania:\n1. szyfr podstawieniowy\n2. Szyfr przestawieniowy \n3. Szyfr podstawieniowy i szyfr przestawieniowy. \n4. Odszyfruj teskt.";
		cin >> a;
		if (a == 1)
		{
			tekst2 = podstawieniowy(tekst);
			cout << "zaszyfrowany tekst to:" << tekst2 << endl;
		}
		if (a == 2)
		{
			tekst2 = przestawieniowy(tekst);
			cout << "zaszyfrowany tekst to:" << tekst2 << endl;
		}
		if (a == 3)
		{
			tekst2 = podstawieniowy(tekst);
			tekst2 = przestawieniowy(tekst2);
			cout << "zaszyfrowany tekst to:" << tekst2 << endl;
		}
		if (a == 4)
		{

	}
}
