#include "ComputerBase.h"

std::string ComputerBase::GetModel() {
	return "This model's name is " + model_name;
}
std::string ComputerBase::GetPrice() {
	return "This model's price is " + std::to_string(price);
}