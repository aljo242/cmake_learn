// a simple program that builds a sqrt table
#include <iostream>
#include <fstream>
#include <cmath>

int main(int argc, char* argv[])
{
	// make sure we got enough args
	if (argc < 2)
	{
		return 1;
	}

	std::ofstream fout(argv[1], std::ios_base::out);
	const bool fileOpen {fout.is_open()};

	if (fileOpen)
	{
		fout << "double sqrtTable[] = {\n";
		for (int i = 0; i < 10; ++i)
		{
			fout << std::sqrt(static_cast<double>(i)) << ",\n";
		}
		// close table with a zero
		fout << "0};\n";
		fout.close(); 
	}

	return fileOpen ? 0 : 1;
}