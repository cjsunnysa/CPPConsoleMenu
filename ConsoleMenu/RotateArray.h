#pragma once
#include "ExecutableMenuItem.h"
#include <array>

using std::array;

class RotateArray :
	public ExecutableMenuItem
{
private:
	short _rightShiftCount;

protected:
	array<int, 10> _myarray{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	void ExecuteFunction() override;
	void PrintArray(string label);
	virtual void RotateRight(short count);

	RotateArray(string description, short rightShiftCount) :
		ExecutableMenuItem(description),
		_rightShiftCount(rightShiftCount) {};

public:
	RotateArray() :
		ExecutableMenuItem("Rotate Array"),
		_rightShiftCount(3) {};
};

