#pragma once
#include "Icomputer.h"
#include <string>

class ComputerBase : public Icomputer
{
protected:
	double price;
	std::string model_name;

public:
	ComputerBase() {
		price = 0;
		model_name = "!!! UNKNOWN !!!";
	}

	ComputerBase(std::string model_name, double price) {
		this->price = price;
		this->model_name = model_name;
	}

	std::string GetModel() override;
	std::string GetPrice() override;
};

