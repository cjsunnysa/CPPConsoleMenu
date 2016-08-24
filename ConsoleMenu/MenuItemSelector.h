#pragma once
#include "MenuItem.h"
#include "Menu.h"
#include <functional>

class MenuItemSelector
{
private:
	static bool const IsBackOrExitSelected(const string& inputValue);
	static string const GetInputValue();
	static MenuItem* const GetSelectedMenuItem(string const inputValue, vector<reference_wrapper<MenuItem>> const menuItems);
	static MenuItem* GetReturnItem(Menu& menu);
public:
	static MenuItem* const GetMenuItemSelection(Menu& const menu);
};

