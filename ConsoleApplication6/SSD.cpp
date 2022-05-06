#include "SSD.h"

SSD::SSD() : ComputerBase() {
	model_name = "!!! UNKNOWN !!!";
	price = 0;
}
SSD::SSD(std::string model_name, double price) : ComputerBase(model_name, price) {
	this->model_name = model_name;
	this->price = price;
}

std::string SSD::GetPrice() {
	return std::to_string(price);
}

std::string SSD::GetModel() {
	return "SSD's size is " + model_name;
}

std::string SSD::InstallWindows() {
	return "Windows was succesfully installed!\n";
}

std::string SSD::TurnOn() {
	return "The GPU's turned on!\n";
}

std::string SSD::TurnOff() {
	return "The GPU's turned off!\n";
}