#include <iostream>

#include "MathFunctions.h"
#include "Table.h" // generated table
#include "mysqrt.h"

using namespace sqrt_math_constants;

// hacky sqrt
double mysqrt(const double x)
{


	if (x <= 0.0)
	{
		return 0.0;
	}

	// use table to find init value
	double result {x};
	if (x >= 1 && x < numVals)
	{
		std::cout << "Use the table to help find an initial value\n";
		result = sqrtTable[static_cast<int>(x)];
	}


	// perform 10 iters
	for (int i = 0; i < numVals; ++i)
	{
		if (result <= 0.0)
		{
			result = lowerClampVal;
		}

		const double delta { x - (result * result) };
		result =  result + (deltaScale * delta / result);
		std::cout << "Computing sqrt of " << x << " to be: " << result << "\n";
 	}

 	return result;
}