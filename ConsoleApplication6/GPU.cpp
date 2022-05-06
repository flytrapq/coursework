#include "GPU.h"

GPU::GPU() : ComputerBase() {
	model_name = "!!! UNKNOWN !!!";
	price = 0;
}
GPU::GPU(std::string model_name, double price) : ComputerBase(model_name, price) {
	this->model_name = model_name;
	this->price = price;
}

std::string GPU::GetPrice() {
	return std::to_string(price);
}

std::string GPU::Overclock() {
	return "GPU's been overclocked!\n";
}

std::string GPU::TurnOn() {
	return "The GPU's turned on!\n";
}

std::string GPU::TurnOff() {
	return "The GPU's turned off!\n";
}