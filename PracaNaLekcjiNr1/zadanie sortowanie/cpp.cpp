#include <iostream>
#include<ctime>
#include<vector>
#include"vex.h"
#include<cstdlib>
using namespace std;
vex ve;
int main()
{
	vector<int> dj;
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		int a = rand() % 1000;
		dj.push_back(a);
	}
	cout << "\ndane vectora:" << endl;
	for (int i = 0; i < 100; i++)
	{
		cout << dj[i] << "  ";
	}
	ve.selekcja(dj);
	ve.selekcja2(dj);
}