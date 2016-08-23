#pragma once
#include "MenuItem.h"
#include "Menu.h"

class MenuItemSelector
{
private:
	static bool IsBackOrExitSelected(string inputValue);
	static string GetInputValue();
	static MenuItem* MenuItemSelector::GetSelectedMenuItem(string inputValue, vector<MenuItem*> menuItems);
public:
	static MenuItem* GetMenuItemSelection(Menu* menu);
};

