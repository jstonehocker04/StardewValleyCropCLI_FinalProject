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
#include <string>
#include <fstream>

int main() {
	std::ifstream input_file;
	//	Print's ascii art title
	input_file.open("Title.txt");
	if (input_file) {
		std::string line;
		while (getline(input_file, line))
			std::cout << line << '\n';
		input_file.close();
	}

}