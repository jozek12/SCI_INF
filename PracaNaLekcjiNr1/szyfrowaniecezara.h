#pragma once
#include <iostream>
#include <string>
using namespace std;
class szyfrowaniecezara
{
public:
	string podstawieniowy(string tekstt, int klucz, string temp_string);
	void deszyfrowanie_cezara(string tekstt, int d, string temp_string);
	string przestawieniowy(string tekstt);
private:
};

