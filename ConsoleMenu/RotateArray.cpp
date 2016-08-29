#include "stdafx.h"
#include "RotateArray.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void RotateArray::ExecuteFunction()
{
	cout << "shifting array items " << std::to_string(_rightShiftCount) << " to the right:" << endl << endl;

	if (_rightShiftCount > _myarray.size())
		_rightShiftCount %= _myarray.size();

	PrintArray("before:");

	RotateRight(_rightShiftCount);

	PrintArray("after:");
}


void RotateArray::PrintArray(string label)
{
	cout << label << "\t";

	for (int val : _myarray)
	{
		cout << val;

		if (val != _myarray[_myarray.size() - 1])
			cout << ", ";
	}

	cout << endl;
}

void RotateArray::RotateRight(short count)
{
	const auto arrSize = _myarray.size();

	
	// if arrSize = 10 and count = 14
	// count %= 10 = 4
	if (count > arrSize)
		count %= arrSize;

	array<int, 10> result{};

	// when count = 4
	// fill the first 3
	// start with result[0] = 10 - 4 + 0 = 6
	for (auto i = 0; i < count; ++i)
	{
		result[i] = _myarray[arrSize - count + i];
	}

	// when count = 4
	// fill the rest of the array
	// result[4] = _myarray[0]
	int j = 0;
	for (auto i = count; i < arrSize; ++i)
	{
		result[i] = _myarray[j++];
	}

	_myarray.swap(result);
}
