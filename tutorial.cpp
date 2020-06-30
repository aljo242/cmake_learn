// a simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>

#include "TutorialConfig.h"

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		// report version
		std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << "\n";

		std::cout << "Usage: " << argv[0] << " number\n";
		return 1;
	}

	// convert input to double
	const double inputValue {std::stod(argv[1])};

	// calc square root
	const double outputValue {std::sqrt(inputValue)};
	std::cout << "Square root of " << inputValue << " is: " << outputValue << "\n";

	return 0;
}