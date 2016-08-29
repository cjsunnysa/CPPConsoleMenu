#pragma once
#include "RotateArray.h"
class RotateArray3Reversal :
	public RotateArray
{
protected:
	void RotateRight(short count) override;
public:
	RotateArray3Reversal() :
		RotateArray("Rotate Array 3 Part Reversal", 4) {};
};

