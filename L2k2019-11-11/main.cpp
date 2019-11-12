#include <iostream>
#include <Windows.h>
#include "Kot.h"
#include "Pyes.h"
#include <functional>
using namespace std;

void ChtoGovorit(Zver& z)
{
	z.golos();
}

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Kot m("Murzik");
	Pyes t("Tuzik");
	ChtoGovorit(m);
	ChtoGovorit(t);
	
	system("pause");
}