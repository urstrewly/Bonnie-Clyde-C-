#include "Header.h"
#include <iostream>
#include <string>

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


	while (1) {
		std::cin >> choice;
		if (choice == 1) {
			testing.bonnie();
			break;
		}
		else if (choice == 2) {
			testing.clyde();
			break;
		}
		else {
			std::cout << "Error wrong choice" << std::endl;
		}
	}
}
