#include "Header.h"
#include <iostream>
#include <string>

void main()
{
	int choice;
	player testing;
	std::cout << "Welcome choose your player!" << std::endl;
	std::cout << "1. Bonnie" << std::endl;
	std::cout << "2. Clyde" << std::endl;
	std::cin >> choice;

	if (choice == 1) {
		testing.bonnie();
	}
	else if (choice == 2) {
		testing.clyde();
	}
	else {
		std::cout << "Error wrong choice" << std::endl;
	}
	
}