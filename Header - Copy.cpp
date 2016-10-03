#include "Header.h"
#include <iostream>
#include <string>
player::player()
{
	int hatChoice = 0;
	int outfitChoice = 0;
	int weaponChoice = 0;
}

void player::bonnie()
{
	std::cout << "Hello I am Bonnie!" << std::endl;

	std::cout << " - Hat choices - " << std::endl;
	std::cout << "1. Top hat " << std::endl;
	std::cout << "2. Baseball cap " << std::endl;
	std::cout << "3. Cowboy hat " << std::endl;
	std::cin >> hatChoice;

	std::cout << " - Outfits - " << std::endl;
	std::cout << "1. Red Dress " << std::endl;
	std::cout << "2. pair of blue jeans w/ blue shirt" << std::endl;
	std::cout << "3. Overalls w/ white shirt " << std::endl;
	std::cin >> outfitChoice;

	std::cout << " - Weapons - " << std::endl;
	std::cout << "1. 1911 w/ ivory grips " << std::endl;
	std::cout << "2. Browning automatic rifle" << std::endl;
	std::cout << "3. Shotgun " << std::endl;
	std::cin >> weaponChoice;


	if (hatChoice == 1) {
		std::cout << "Hat choice: Top hat" << std::endl;
	}
	else if (hatChoice == 2) {
		std::cout << "Hat choice: Baseball cap" << std::endl;
	}
	else if (hatChoice == 3) {
		std::cout << "Hat choice: Cowboy hat" << std::endl;
	}
	else if (hatChoice <= 0 || hatChoice > 3){
		std::cout << "Invalid choice" << std::endl;
	}
	// logic statements for hat choice



	if (outfitChoice == 1) {
		std::cout << "Outfit choice: Red Dress" << std::endl;
	}
	else if (hatChoice == 2) {
		std::cout << "Outfit choice: Pair of blue jeans w/ blue shirt" << std::endl;
	}
	else if (hatChoice == 3) {
		std::cout << "Outfit choice: Overalls w/ white shirt " << std::endl;
	}
	else if (outfitChoice <= 0 || outfitChoice > 3) {
		std::cout << "Invalid choice" << std::endl;
	}
	// logic statements for outfitChoice



	if (weaponChoice == 1) {
		std::cout << "Weapon choice: 1911 w/ ivory grips " << std::endl;
	}
	else if (weaponChoice == 2) {
		std::cout << "Weapon choice: Browning automatic rifle" << std::endl;
	}
	else if (weaponChoice == 3) {
		std::cout << "Weapon choice: Shotgun" << std::endl;
	}
	else if (weaponChoice <= 0 || weaponChoice > 3) {
		std::cout << "Invalid choice" << std::endl;
	}
	// logic statements for weaponchoices

}

void player::clyde()
{
	std::cout << "Hello I am Clyde" << std::endl;

	std::cout << " - Hat choices - " << std::endl;
	std::cout << "1. Top hat " << std::endl;
	std::cout << "2. Straw hat  " << std::endl;
	std::cout << "3. Flat cap " << std::endl;
	std::cin >> hatChoice;

	std::cout << " - Outfits - " << std::endl;
	std::cout << "1. black suit w/ red tie " << std::endl;
	std::cout << "2. pair of blue jeans w/ blue shirt" << std::endl;
	std::cout << "3. pair of blue jeans w/ white shirt " << std::endl;
	std::cin >> outfitChoice;

	std::cout << " - Weapons - " << std::endl;
	std::cout << "1. 1911 w/ custom skull grips " << std::endl;
	std::cout << "2. Browning automatic rifle" << std::endl;
	std::cout << "3. 12g Shotgun " << std::endl;
	std::cin >> weaponChoice;


	if (hatChoice == 1) {
		std::cout << "Hat choice: Top hat" << std::endl;
	}
	else if (hatChoice == 2) {
		std::cout << "Hat choice: Straw hat" << std::endl;
	}
	else if (hatChoice == 3) {
		std::cout << "Hat choice: Flat cap " << std::endl;
	}
	else if (hatChoice <= 0 || hatChoice > 3) {
		std::cout << "Invalid choice" << std::endl;
	}
	// logic statements for hat choice



	if (outfitChoice == 1) {
		std::cout << "Outfit choice: black suit w/ red tie" << std::endl;
	}
	else if (hatChoice == 2) {
		std::cout << "Outfit choice: Pair of blue jeans w/ blue shirt" << std::endl;
	}
	else if (hatChoice == 3) {
		std::cout << "Outfit choice: pair of blue jeans w/ white shirt " << std::endl;
	}
	else if (outfitChoice <= 0 || outfitChoice > 3) {
		std::cout << "Invalid choice" << std::endl;
	}
	// logic statements for outfitChoice



	if (weaponChoice == 1) {
		std::cout << "Weapon choice: 1911 w/ custom skull grips " << std::endl;
	}
	else if (weaponChoice == 2) {
		std::cout << "Weapon choice: Browning automatic rifle" << std::endl;
	}
	else if (weaponChoice == 3) {
		std::cout << "Weapon choice: 12g Shotgun" << std::endl;
	}
	else if (weaponChoice <= 0 || weaponChoice > 3) {
		std::cout << "Invalid choice" << std::endl;
	}
	// logic statements for weaponchoices
}
