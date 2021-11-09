#include "szyfrowaniecezara.h"
#include <iostream>
#include <string>
string szyfrowaniecezara::podstawieniowy(string tekstt, int klucz, string temp_string)
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
string szyfrowaniecezara::przestawieniowy(string tekstt)
{
	for (int i = 0; i < tekstt.length() - 1; i += 2)
	{
		swap(tekstt[i], tekstt[i + 1]);
	}


	return tekstt;
}
void szyfrowaniecezara::deszyfrowanie_cezara(string tekstt, int d, string temp_string)
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