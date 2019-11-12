#pragma once
#include <string>

class Zver abstract
{
protected:
	std::string name;
public:
	virtual void golos() = 0;
	Zver(std::string name);
};

