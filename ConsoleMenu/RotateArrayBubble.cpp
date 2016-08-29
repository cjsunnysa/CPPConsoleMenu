#include "stdafx.h"
#include "RotateArrayBubble.h"


void RotateArrayBubble::RotateRight(short count)
{
	for (auto i = 0; i < count; ++i)
	{
		for (auto j = _myarray.size() - 1; j > 0; --j)
		{
			auto temp = _myarray[j];
			_myarray[j] = _myarray[j - 1];
			_myarray[j - 1] = temp;
		}
	}
}