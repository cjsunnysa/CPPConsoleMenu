#pragma once
#include "MenuItem.h"
#include "Menu.h"
#include <functional>

class MenuItemSelector
{
private:
	static bool IsBackOrExitSelected(string inputValue);
	static string GetInputValue();
	static MenuItem* MenuItemSelector::GetSelectedMenuItem(string inputValue, vector<reference_wrapper<MenuItem>> menuItems);
public:
	static MenuItem* GetMenuItemSelection(Menu* menu);
};

