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

using std::vector, std::string, std::ifstream, std::istringstream;

//	Declared Funcitons
std::vector<Crop> readCSV(const std::string&);
void printTitle();

int main() {
	// Store Data from CSV into vector
	vector<Crop> cropList = readCSV("TestCropInfo.csv");
	
	printTitle();

	

	// Initialize variable to store Command Line Input and then store input into it to check
	std::cout << std::to_string(cropList[1]);
}

// Definig Declared Functions
vector<Crop> readCSV(const std::string& filename) {
	vector<Crop> cropList;
	ifstream file(filename);
	string line;

	while (getline(file, line)) {
		istringstream iss(line);
		string crop_name;
		string season;
		int pierre_price;
		int growth_time;
		bool regrowth;
		int regrowth_time;
		int normal_sell;
		// Read data from each line
		if (std::getline(iss, crop_name, ',') && iss >> season, iss >> pierre_price, iss >> growth_time, iss >> regrowth, iss >> regrowth_time, iss >> normal_sell) {
			cropList.push_back({ crop_name, season, pierre_price, growth_time, regrowth, regrowth_time, normal_sell });
		}
	}
	// Prints to confirm action is done
	std::cout << "CSV converted to vector\n";

	return cropList;
}


void printTitle() {
	ifstream file("Title.txt");
	if (file) {
		string line;
		while (getline(file, line))
			std::cout << line << '\n';
	}
	std::cout << "\n\n";
}