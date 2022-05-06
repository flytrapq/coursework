#include "RAM.h"

RAM::RAM() : ComputerBase() {
	model_name = "!!! UNKNOWN !!!";
	price = 0;
}
RAM::RAM(std::string model_name, double price) : ComputerBase(model_name, price) {
	this->model_name = model_name;
	this->price = price;
}

std::string RAM::GetPrice() {
	return std::to_string(price);
}

std::string RAM::GetModel() {
	return "RAM's size is " + model_name;
}

std::string RAM::AddMoreRam() {
	return "More RAM memory was added!\n";
}

std::string RAM::TurnOn() {
	return "The GPU's turned on!\n";
}

std::string RAM::TurnOff() {
	return "The GPU's turned off!\n";
}