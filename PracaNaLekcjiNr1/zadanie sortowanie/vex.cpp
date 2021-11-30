#include "vex.h"
#include<vector>
#include<iostream>
using namespace std;
int vex::selekcja(vector<int> jd)
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100 - 1; j++)
		{
			if (jd[j] > jd[j + 1])
			{
				swap(jd[j], jd[j + 1]);
			}
	}

	}
	cout << "\ndane vectora posortowane bubble:" << endl;
	for (int i = 0; i < 100; i++)
	{
		cout << jd[i] << "  ";
	}
	return 0;
}
int vex::selekcja2(vector<int> jd)
{
	int pom, j;
	for (int i = 1; i < 100; i++)
	{
		pom = jd[i]; 
		j = i - 1;

		while (j >= 0 && jd[j] > pom)
		{
			jd[j + 1] = jd[j];
			--j;
		}
		jd[j + 1] = pom;
	}
	cout << "\ndane vectora posortowane wstawianie:" << endl;
	for (int i = 0; i < 100; i++)
	{
		cout << jd[i] << "  ";
	}
	return 0;
}


