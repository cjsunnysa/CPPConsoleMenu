#pragma once
#include "MenuItem.h"
class NullMenuItem :
	public MenuItem
{
public:
	NullMenuItem() : MenuItem("") {};

	void Execute() override { return; }
};

