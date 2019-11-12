#pragma once
#include "Zver.h"
class Pyes :
	public Zver
{
public:
	Pyes(std::string name): Zver(name){}
	void golos() override;
};

