#include "CPU.h"

CPU::CPU() : ComputerBase() {
	model_name = "!!! UNKNOWN !!!";
	price = 0;
}
CPU::CPU(std::string model_name, double price) : ComputerBase(model_name, price) {
	this->model_name = model_name;
	this->price = price;
}

std::string CPU::TurnOn() {
	return "The processor's turned on!\n";
}

std::string CPU::TurnOff() {
	return "The processor's turned off!\n";
}