#pragma once
#include "ComputerBase.h"
#include <string>

class RAM : public ComputerBase
{
public:
	RAM();
	RAM(std::string model_name, double price);

	std::string GetPrice() override;
	std::string GetModel() override;
	std::string TurnOn() override;
	std::string TurnOff() override;
	std::string AddMoreRam();

};
