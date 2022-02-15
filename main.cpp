
#include <iostream>
#include "Functions.h"

int main()
{
	int* mass = new int[7]{ 1,2,3,5,-85,0,89 };
	int ind = -1;
	int res = FindSmallest(mass, 7, ind);
	std::cout << "Min: " << res << " Index: " <<ind <<std::endl;
}