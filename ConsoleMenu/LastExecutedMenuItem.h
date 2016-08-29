#pragma once
#include "MenuItem.h"
#include "Menu.h"
class LastExecutedMenuItem :
	public MenuItem
{
private:
	Menu& _mainMenu;

public:
	LastExecutedMenuItem(Menu& mainMenu) :
		MenuItem("Last Executed Function"),
		_mainMenu(mainMenu) {};

	void Execute() override;
};

