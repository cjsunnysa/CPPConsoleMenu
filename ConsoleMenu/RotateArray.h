#pragma once
#include "ExecutableMenuItem.h"
#include <array>

using std::array;

class RotateArray :
	public ExecutableMenuItem
{
private:
	array<int, 10> _myarray { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	void PrintArray(string label);
	void RotateRight(short count);

protected:
	void ExecuteFunction() override;

public:
	RotateArray() :
		ExecutableMenuItem("Rotate Array") {};
};

