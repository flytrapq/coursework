#pragma once
#include "ComputerBase.h"
#include <string>

class CPU : public ComputerBase
{
public:
	CPU();
	CPU(std::string model_name, double price);

  //std::string GetPrice() override;
	std::string TurnOn() override;
	std::string TurnOff() override;
};

