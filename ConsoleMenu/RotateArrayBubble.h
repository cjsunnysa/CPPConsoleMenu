#pragma once
#include "RotateArray.h"
class RotateArrayBubble :
	public RotateArray
{
protected:
	void RotateRight(short count) override;

public:
	RotateArrayBubble() :
		RotateArray("Rotate Array Bubble Shift", 6) {};
};

