#include <iostream>

// hacky sqrt
double mysqrt(const double x)
{
	if (x <= 0.0)
	{
		return 0.0;
	}

	double result {x};

	// perform 10 iters
	for (int i = 0; i < 10; ++i)
	{
		if (result <= 0.0)
		{
			result = 0.1;
		}

		const double delta { x - (result * result) };
		result =  result + (0.5 * delta / result);
		std::cout << "Computing sqrt of " << x << " to be: " << result << "\n";
 	}

 	return result;
}