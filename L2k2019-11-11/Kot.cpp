#include "Kot.h"
#include <iostream>

Kot::Kot(std::string name): Zver(name)
{
}

void Kot::golos()
{
	std::cout << name << " govorit: 'Myau-Myau'\n";
}
