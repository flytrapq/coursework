#pragma once
#include "ComputerBase.h"
#include <string>

class GPU : public ComputerBase
{
public:
	GPU();
	GPU(std::string model_name, double price);

	std::string GetPrice() override;
	std::string Overclock();
	std::string TurnOn() override;
	std::string TurnOff() override;

};

