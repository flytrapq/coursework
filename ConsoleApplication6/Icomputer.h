#pragma once
#include <string>

class Icomputer
{
public:
	virtual std::string GetModel() = 0;
	virtual std::string GetPrice() = 0;
	virtual std::string TurnOn() = 0;
	virtual std::string TurnOff() = 0;
};

