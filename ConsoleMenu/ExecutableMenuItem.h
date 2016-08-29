#pragma once
#include "MenuItem.h"
class ExecutableMenuItem :
	public MenuItem
{
protected:
	virtual void ExecuteFunction() = 0;

public:
	ExecutableMenuItem(string description) :
		MenuItem(description) {};

	void Execute() override;
};

