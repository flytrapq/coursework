#pragma once
#include "ComputerBase.h"
#include <string>

class SSD : public ComputerBase
{
public:
	SSD();
	SSD(std::string model_name, double price);

	std::string GetPrice() override;
	std::string GetModel() override;
	std::string TurnOn() override;
	std::string TurnOff() override;
	std::string InstallWindows();

};