#include <iostream>
#include <string>
using namespace std;
string podstawieniowy(string tekstt, int klucz, string temp_string)
{
	for (int i = 0; i < tekstt.length(); i++)
	{
		if (tekstt[i] > 96)
		{
			unsigned char temp;
			temp = tekstt[i] + klucz;
			if (temp >= 123)
			{
				temp = (temp % 123) + 97;
			}
			temp_string += temp;
		}
		else
		{
			temp_string += tekstt[i];
		}
	}
	return temp_string;
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
void deszyfrowanie_cezara(string tekstt, int d, string temp_string)
{
	for (int j = 1; j < 27; j++)
	{
		d = j;
		for (int i = 0; i < tekstt.length(); i++)
		{
			if (tekstt[i] > 96)
			{
				if (tekstt.length() == i)
				{
					temp_string.push_back(' ');
				}
				unsigned char temp;
				temp = tekstt[i] - d;
				if (temp <= 96)
				{
					char x = (tekstt[i] % 97) + 123;
					x -= d;
					temp = x;
				}
				temp_string += temp;

			}
			else
			{
				temp_string += tekstt[i];
			}
		}
	}
	cout << "mozliwe deszyfrowanie: " << temp_string;
}
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
		cout << "podaj opcje szyfrowania:\n1. szyfr podstawieniowy\n2. Szyfr przestawieniowy \n3. Szyfr podstawieniowy i szyfr przestawieniowy. \n4. Odszyfruj teskt.";
		cin >> a;
		if (a == 1)
		{
			cout << "podaj liczbe do podstawiania:(do 26)" << endl;
			cin >> d;
			tekst2 = podstawieniowy(tekst, d, tekst3);
			cout << "zaszyfrowany tekst to:" << tekst2 << endl;
		}
		if (a == 2)
		{
			tekst2 = przestawieniowy(tekst);
			cout << "zaszyfrowany tekst to:" << tekst2 << endl;
		}
		if (a == 3)
		{
			cout << "podaj liczbe do podstawiania:(do 26)" << endl;
			cin >> d;
			tekst2 = podstawieniowy(tekst, d, tekst3);
			tekst2 = przestawieniowy(tekst2);
			cout << "zaszyfrowany tekst to:" << tekst2 << endl;
		}
		if (a == 4)
		{
			deszyfrowanie_cezara(tekst2, d, tekst3);
		}
	}
}