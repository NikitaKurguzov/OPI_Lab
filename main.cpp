//this code does these things:
//it runs
//it exists
#include <iostream>
#include "Functions.h"

int add1;
int add2;
int add3;
int add4;
int main()
{
	//array that we will work with
	int* mass = new int[7]{ 1,2,3,5,-85,0,89 };
	//index
	int ind = -1;
	int res = FindSmallest(mass, 7, ind);
	//output
	std::cout << "Min: " << res << " Index: " <<ind <<std::endl;
}