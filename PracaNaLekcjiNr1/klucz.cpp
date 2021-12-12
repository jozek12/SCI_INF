#include "klucz.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int klucz::tworz() {
	int c, a, b, ost;
	int d = 0;
	int e = 0;
	int ax, bx, temp;
	int tab[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
	srand(time(NULL));


	c = tab[rand() % 9 + 0];
	a = tab[rand() % 9 + 0];

	b = c * a;
	ost = (c - 1) * (a - 1);
	
	for (int i = 2; i <= ost; i++)
	{
		ax = i; bx = ost;
		while (bx)
		{
			temp = bx;
			bx = ax % bx;
			ax = temp;
		}
		if (ax == 1) e = i;
	}

	while((d * e) % ost != 1) {
		d = d + 1;
	}


	cout << ost << endl;
	cout << e << endl;
	cout << d << endl;
	return 0;
}