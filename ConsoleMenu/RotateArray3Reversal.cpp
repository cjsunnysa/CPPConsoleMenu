#include "stdafx.h"
#include "RotateArray3Reversal.h"
#include <vector>

using std::vector;

void RotateArray3Reversal::RotateRight(short count)
{
	// reverse first section, count = 4
	// { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
	// { 6, 5, 4, 3, 2, 1, 7, 8, 9, 10 }
	std::reverse(_myarray.begin(), _myarray.end() - count);

	// reverse second section, count = 4
	// { 6, 5, 4, 3, 2, 1, 10, 9, 8, 7 }
	std::reverse(_myarray.end() - count, _myarray.end());
	
	// reverse entire array
	// { 7, 8, 9, 10, 1, 2, 3, 4, 5, 6 }
	std::reverse(_myarray.begin(), _myarray.end());
}