/*----------------------------------------------------
 * Program Title:	Stardew Valley Crop Information
 * Author:          Josiah Stonehocker
 * Date:			4/24/2024
 * Description:
 * Usage / Issues:
 *-----------------------------------------------------
 */

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Crop.h"

using std::string;


//	Declared Funcitons
void printTitle();



int main() {
	//Initialize Crop Objects then store in cropList vector
	Crop BlueJazz = Crop::Crop("Blue Jazz", "Spring", 2.86, 30, 37, 7, 0, 50, 62, 75, 100, 45, 63, 81, 117, 20, 28, 36, 52, "Lucky Lunch", "");
	Crop Carrot = Crop::Crop("Carrot", "Spring", 11.6, 0, 0, 3, 0, 35, 43, 52, 70, 75, 105, 135, 195, 33, 47, 60, 87, "", "");
	Crop Califlower = Crop::Crop("Cauliflower", "Spring", 7.92, 80, 100, 12, 0, 175, 218, 262, 350, 75, 105, 135, 195, 33, 47, 60, 87, "Cheese Cauliflower|Spring Crops Bundle|\"Jodi's Request\" Quest", "Maru");
	Crop CoffeeBean = Crop::Crop("Coffee Bean", "Spring,Summer", 25.56, 0, 0, 10, 2, 15, 18, 22, 30, 0, 0, 0, 0, 0, 0, 0, 0, "Coffee", "");
	Crop Garlic = Crop::Crop("Garlic", "Spring", 5, 40, 0, 4, 0, 60, 75, 90, 120, 20, 28, 36, 52, 9, 12, 16, 23, "Escargot|Fiddlehead Risotto,Oil of Garlic", "");
	Crop GreenBean = Crop::Crop("Green Bean", "Spring", 7.2, 60, 75, 10, 3, 40, 50, 60, 80, 25, 35, 45, 65, 11, 15, 20, 29, "Bean Hotpot|Spring Crops Bundle", "");
	Crop Kale = Crop::Crop("Kale", "Spring", 6.67, 70, 87, 6, 0, 110, 137, 165, 220, 50, 70, 90, 130, 22, 31, 40, 58, "Salmon Dinner|Stir Fry", "");
	Crop Parsnips = Crop::Crop("Parsnips", "Spring", 3.75, 20, 62, 6, 0, 80, 100, 120, 160, 25, 35, 45, 65, 11, 15, 20, 29, "Hashbrowns|Spring Crops Bundle", "");
	Crop Rhubarb = Crop::Crop("Rhubarb", "Spring", 5, 0, 0, 13, 0, 220, 275, 330, 440, 0, 0, 0, 0, 0, 0, 0, 0, "Rhubarb Pie", "");
	Crop Strawberry = Crop::Crop("Strawberry", "Spring", 9.23, 100, 0, 8, 4, 120, 150, 180, 240, 50, 70, 90, 130, 22, 31, 40, 58, "", "Demetrius|Maru");
	Crop Tulip = Crop::Crop("Tulip", "Spring", 20.83, 20, 25, 6, 0, 30, 37, 45, 60, 45, 63, 81, 117, 20, 28, 36, 52, "", "Evelyn");
	Crop UnmilledRice = Crop::Crop("Unmilled Rice", "Spring", -1.67, 40, 0, 6, 0, 30, 37, 45, 60, 3, 4, 5, 7, 1, 1, 2, 3, "Rice", "");
	Crop Blueberry = Crop::Crop("Blueberry", "Summer", 20.8, 80, 0, 13, 4, 50, 62, 75, 100, 25, 35, 45, 65, 11, 15, 20, 29, "Blueberry Tart|Fruit Salad|Summer Crops Bundle", "");
	Crop Corn = Crop::Crop("Corn", "Summer|Fall", 7.41, 150, 187, 14, 4, 50, 62, 75, 100, 25, 35, 45, 65, 11, 15, 20, 29, "Tartilla|Oil Fall Crops Bundle|Quality Crops Bundle", "");
	Crop Hops = Crop::Crop("Hops", "Summer", 13.52, 60, 75, 11, 1, 25, 31, 37, 50, 45, 63, 81, 117, 20, 28, 36, 52, "Pale Ale", "");
	Crop HotPepper = Crop::Crop("Hot Pepper", "Summer", 10.77, 40, 50, 5, 3, 40, 50, 60, 80, 13, 18, 23, 33, 5, 8, 10, 14, "Pepper Poppers|Spicy Eel|Tropical Curry|Summer Crops|\"Knee Therapy\" Quest", "Lewis|Shane");
	Crop Melon = Crop::Crop("Melon", "Summer", 14.17, 80, 100, 12, 0, 250, 312, 375, 500, 113, 158, 203, 293, 50, 71, 91, 131, "Fruit Salad|Pink Cake|Summer Crops Bundle|Quality Crops Bundle|\"Crop Research\" Quest", "Penny");
	Crop Poppy = Crop::Crop("Poppy", "Summer", 5.71, 100, 125, 7, 0, 140, 175, 210, 280, 45, 63, 81, 117, 20, 28, 36, 52, "Poppyseed Muffin|Chef's Bundle", "Penny");
	Crop Radish = Crop::Crop("Radish", "Summer", 8.33, 40, 50, 6, 0, 90, 112, 135, 180, 45, 63, 81, 117, 20, 28, 36, 52, "Radish Salad|Red Plate", "");
	Crop RedCabbage = Crop::Crop("Red Cabbage", "Summer", 17.78, 100, 0, 9, 0, 260, 325, 390, 520, 75, 105, 135, 195, 33, 47, 60, 87, "Coleslaw|Fish Taco|Red Plate|Dye Bundle", "");
	Crop Starfruit = Crop::Crop("Starfruit", "Summer", 25.92, 0, 0, 13, 0, 750, 937, 1125, 1500, 125, 175, 225, 325, 56, 78, 101, 146, "Junimo Hut|\"A Soldier's Star\" Quest", "");
	Crop SummerSpangle = Crop::Crop("Summer Spangle", "Summer", 5, 50, 62, 8, 0, 45, 63, 81, 117, 20, 28, 36, 52, 45, 63, 81, 117, "", "Caroline");
	Crop SummerSquash = Crop::Crop("Summer Squash", "Summer", 8.93, 0, 0, 6, 0, 45, 56, 67, 90, 63, 88, 113, 163, 28, 39, 50, 73, "", "");
	Crop Sunflower = Crop::Crop("Sunflower", "Summer|Fall", -5.63, 200, 125, 8, 0, 80, 100, 120, 160, 45, 63, 81, 117, 20, 28, 36, 52, "Oil|Dye Bundle", "Haley");
	Crop Tomato = Crop::Crop("Tomato", "Summer", 9.26, 50, 62, 11, 4, 60, 75, 90, 120, 20, 28, 36, 52, 9, 12, 16, 23, "Bruschetta|Eggplant Parmesan|Fish Stew|Pizza|Spaghetti|Vegetable Medley|Sumer Crops Bundle", "");
	Crop Wheat = Crop::Crop("Wheat", "Summer|Fall", 3.75, 10, 12, 4, 0, 25, 31, 37, 50, 0, 0, 0, 0, 0, 0, 0, 0, "Beer|Wheat Flour|Fodder Bundle", "");
	Crop Amaranth = Crop::Crop("Amaranth", "Fall", 11.43, 70, 87, 7, 0, 150, 187, 225, 300, 50, 70, 90, 130, 22, 31, 40, 58, "Salmon Dinner|\"Cow's Delight\" Quest", "");
	Crop Artichoke = Crop::Crop("Artichoke", "Fall", 16.25, 30, 0, 8, 0, 160, 200, 240, 320, 30, 42, 54, 78, 13, 18, 24, 35, "Artichoke Dip|Super Meal", "");
	Crop Beet = Crop::Crop("Beet", "Fall", 13.33, 0, 0, 6, 0, 100, 125, 150, 200, 30, 42, 54, 78, 13, 18, 24, 35, "Vegetable Medley|Sugar\"The Mysterious Qi\" Quest", "Evelyn");
	Crop BokChoy = Crop::Crop("Bok Choy", "Fall", 7.5, 50, 62, 4, 0, 80, 100, 120, 160, 25, 35, 45, 65, 11, 15, 20, 29, "Super Meal", "");
	Crop Broccolie = Crop::Crop("Broccoli", "Fall", 8.33, 0, 0, 8, 0, 70, 87, 105, 140, 63, 88, 113, 163, 28, 39, 50, 73, "", "");
	Crop Cranberries = Crop::Crop("Cranberries", "Fall", 18.89, 240, 300, 7, 5, 75, 93, 112, 150, 38, 53, 68, 98, 17, 23, 30, 44, "Craberry Candy|Cranberry Sauce|Stuffing|Super Meal", "");
	Crop Eggplant = Crop::Crop("Eggplant", "Fall", 11.2, 20, 25, 5, 5, 60, 75, 90, 120, 20, 28, 36, 52, 9, 12, 16, 23, "Eggplant Parmesan|Survival Burger|Fall Crops Bundle", "");
	Crop FairyRose = Crop::Crop("Fairy Rose", "Fall", 7.5, 200, 250, 12, 0, 290, 362, 435, 580, 45, 63, 81, 117, 20, 28, 36, 52, "Fairy Dust", "Evelyn|Jas");
	Crop Grape = Crop::Crop("Grape", "Fall", 16.8, 60, 75, 10, 3, 80, 100, 120, 160, 38, 53, 68, 98, 17, 23, 30, 44, "Summer Seeds|Summer Foraging Bundle", "Vincent");
	Crop Pumpkin = Crop::Crop("Pumpkin", "Fall", 16.92, 100, 125, 13, 0, 320, 400, 480, 640, 0, 0, 0, 0, 0, 0, 0, 0, "Autumn's Bounty|Pumpkin Pie|Pumpkin Soup|Jack-O-Lantern|Fall Crops Bundle|Quality Crops Bundle|\"Carving Pumpkins\" Quest", "Abigail|Krobus|Will");
	Crop Yam = Crop::Crop("Yam", "Fall", 10, 60, 75, 10, 0, 160, 200, 240, 320, 45, 63, 81, 117, 20, 28, 36, 52, "Autumn's Bounty|Glazed Yams|Fall Crops Bundle", "Linus");
	Crop Powdermelon = Crop::Crop("Powdermelon", "Winter", 9.52, 0, 0, 7, 0, 60, 75, 90, 120, 63, 88, 113, 163, 28, 39, 50, 73, "", "");
	Crop AncientFruit = Crop::Crop("Ancient Fruit", "Spring|Summer|Fall", 57.14, 0, 0, 28, 7, 500, 687, 825, 1100, 0, 0, 0, 0, 0, 0, 0, 0, "", "");
	Crop SweetGem = Crop::Crop("Sweet Gem Berry", "Fall", 88.33, 0, 0, 24, 0, 3000, 3750, 4500, 6000, 0, 0, 0, 0, 0, 0, 0, 0, "", "");

	std::vector<Crop> cropList = { BlueJazz, Carrot, Califlower, CoffeeBean, Garlic, GreenBean, Kale, Parsnips, Rhubarb, Strawberry, Tulip, UnmilledRice,
		Blueberry, Corn, Hops, HotPepper, Melon, Poppy, Radish, RedCabbage, Starfruit, SummerSpangle, SummerSquash, Sunflower, Tomato, Wheat,
		Amaranth, Artichoke, Beet, BokChoy, Broccolie, Cranberries, Eggplant, FairyRose, Grape, Pumpkin, Yam, Powdermelon, AncientFruit, SweetGem };


	printTitle();

	//Initialization and Defining for 
	bool keep_going = true;
	string input_line;
	while (keep_going == true) {
		std::cin >> input_line;
		//Split input_line into sections
		// Checks to see if the necessary characters - and | are in the command
			// Command Template
			// get-[CROPNAME]|[OBJECTTRAIT] ex: get-Yam|PierrePrice
		if (input_line.find('-') != std::string::npos && input_line.find('|') != std::string::npos) {

		}
		else
			std::cout << "Command not recongized. Please enter a command inside databank. Enter '/help' to view commands.";

		if (input_line == "exit") {
			keep_going = false;
		}
		else if (input_line == "/help") {
			
		}
	}	//while (keeping_going == true)



	return 0;
}	// main()



// Defining Declared Functions
void printTitle() {
	std::ifstream file("Title.txt");
	if (file) {
		string line;
		while (getline(file, line))
			std::cout << line << '\n';
	}
	std::cout << "\n\n";
}