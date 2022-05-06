#include "Console.h"

void ShowUI() {
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "- 1) Create a CPU                   -" << std::endl;
	std::cout << "- 2) Create a GPU                   -" << std::endl;
	std::cout << "- 3) Create a RAM memory            -" << std::endl;
	std::cout << "- 4) Create a SSD                   -" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "\n\n\n";
	std::cout << "---------> "; 
}
void CreateObject(char &object_choice) {
	switch (object_choice) {
	case '1':
		system("cls");
		std::cout << "Processor's model and price?" << std::endl;
		std::cout << std::endl;
		std::cout << "-------> ";
		break;
	case '2':
		system("cls");
		std::cout << "GPU's model and price?" << std::endl;
		std::cout << std::endl;
		std::cout << "-------> ";
		break;
	case '3':
		system("cls");
		std::cout << "RAM's memory and price?" << std::endl;
		std::cout << std::endl;
		std::cout << "-------> ";
		break;
	case '4':
		system("cls");
		std::cout << "SSD's memory and price?" << std::endl;
		std::cout << std::endl;
		std::cout << "-------> ";
		break;
	default:
		break;
	}
}
void Show_CPU_UI() {
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "- 1) Turn ON!			    -" << std::endl;
	std::cout << "- 2) Show it's price                -" << std::endl;
	std::cout << "- 3) Show it's name                 -" << std::endl;
	std::cout << "- 4) Exit                           -" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "\n\n\n";
	std::cout << "---------> ";
}
void Show_GPU_UI() {
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "- 1) Overclock!                     -" << std::endl;
	std::cout << "- 2) Show it's price                -" << std::endl;
	std::cout << "- 3) Show it's name                 -" << std::endl;
	std::cout << "- 4) Exit                           -" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "\n\n\n";
	std::cout << "---------> ";
}
void Show_RAM_UI() {
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "- 1) Add more RAM!                  -" << std::endl;
	std::cout << "- 2) Show it's price                -" << std::endl;
	std::cout << "- 3) Show it's size                 -" << std::endl;
	std::cout << "- 4) Exit                           -" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "\n\n\n";
	std::cout << "---------> ";
}
void Show_SSD_UI() {
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "- 1) Install Windows!               -" << std::endl;
	std::cout << "- 2) Show it's price                -" << std::endl;
	std::cout << "- 3) Show it's size                 -" << std::endl;
	std::cout << "- 4) Exit                           -" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "\n\n\n";
	std::cout << "---------> ";
}

int Interact() {
	ShowUI();
	char choice = ' ';
	std::cin >> choice;

if (choice == '1') {
		std::string model_name;
		double price;

		CreateObject(choice);
		std::cin >> model_name >> price;
		CPU proc(model_name, price);

		Show_CPU_UI();
		char choice2;
		std::cin >> choice2;

		do {
			if (choice2 == '1') {
				system("cls");
				std::cout << proc.TurnOn();
				Show_CPU_UI();
				std::cin >> choice2;
			}
			else if (choice2 == '2') {
				system("cls");
				std::cout << proc.GetPrice() << std::endl;
				Show_CPU_UI();
				std::cin >> choice2;
			}
			else if (choice2 == '3') {
				system("cls");
				std::cout << proc.GetModel() << std::endl;
				Show_CPU_UI();
				std::cin >> choice2;
			}
			else if (choice2 == '4') {
				system("cls");
				Interact();
			}
		} while (choice != '0');
}

else if (choice == '2') {

		std::string model_name;
		double price;

		CreateObject(choice);
		std::cin >> model_name >> price;
		GPU video(model_name, price);

		Show_GPU_UI();
		char choice2;
		std::cin >> choice2;

		do {
			if (choice2 == '1') {
				system("cls");
				std::cout << video.Overclock();
				Show_GPU_UI();
				std::cin >> choice2;
			}
			else if (choice2 == '2') {
				system("cls");
				std::cout << "It's price is " << video.GetPrice() << std::endl;
				Show_GPU_UI();
				std::cin >> choice2;
			}
			else if (choice2 == '3') {
				system("cls");
				std::cout << video.GetModel() << std::endl;
				Show_GPU_UI();
				std::cin >> choice2;
			}
			else if (choice2 == '4') {
				system("cls");
				Interact();
			}
		} while (choice != '0');
		
}

else if (choice == '3') {

	std::string model_name;
	double price;

	CreateObject(choice);
	std::cin >> model_name >> price;
	RAM memory(model_name, price);

	Show_RAM_UI();
	char choice2;
	std::cin >> choice2;

	do {
		if (choice2 == '1') {
			system("cls");
			std::cout << memory.AddMoreRam();
			Show_RAM_UI();
			std::cin >> choice2;
		}
		else if (choice2 == '2') {
			system("cls");
			std::cout << "It's price is " << memory.GetPrice() << std::endl;
			Show_RAM_UI();
			std::cin >> choice2;
		}
		else if (choice2 == '3') {
			system("cls");
			std::cout << memory.GetModel() << std::endl;
			Show_RAM_UI();
			std::cin >> choice2;
		}
		else if (choice2 == '4') {
			system("cls");
			Interact();
		}
	} while (choice != '0');

}

else if (choice == '4') {

std::string model_name;
double price;

CreateObject(choice);
std::cin >> model_name >> price;
SSD disk(model_name, price);

Show_SSD_UI();
char choice2;
std::cin >> choice2;

do {
	if (choice2 == '1') {
		system("cls");
		std::cout << disk.InstallWindows();
		Show_SSD_UI();
		std::cin >> choice2;
	}
	else if (choice2 == '2') {
		system("cls");
		std::cout << "It's price is " << disk.GetPrice() << std::endl;
		Show_SSD_UI();
		std::cin >> choice2;
	}
	else if (choice2 == '3') {
		system("cls");
		std::cout << disk.GetModel() << std::endl;
		Show_SSD_UI();
		std::cin >> choice2;
	}
	else if (choice2 == '4') {
		system("cls");
		Interact();
	}
} while (choice != '0');

}

return 0;
}