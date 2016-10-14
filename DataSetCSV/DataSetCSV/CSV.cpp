#include <iostream>
#include <fstream>
#include <string>
#include <istream>
#include "CSV.h"

void CSVRead::CSVReading()
{
	// declare file stream
	std::ifstream file("NC-EST2014-AGESEX-RES.csv");
	std::string value;
	while (file.good())
	{
		// read a string until next comma
		getline(file, value, ',');
		// display value removing the first and the last character from it
		std::cout << std::string(value, 1, value.length() - 2);
	}
}

