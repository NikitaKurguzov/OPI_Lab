#include <math.h>

int FindSmallest(int *&arr,int lenght,int &ind)
{
	int min = abs(arr[0]);
	ind = 0;
	for (int i = 1; i < lenght; i++)
	{
		if (abs(arr[i]) < min)
		{
			min = abs(arr[i]);
			ind = i;
		}
	}
	return min;
}