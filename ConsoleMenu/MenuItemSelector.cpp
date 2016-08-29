#include "stdafx.h"
#include "MenuItemSelector.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::reference_wrapper;

MenuItem* const MenuItemSelector::GetMenuItemSelection(Menu& menu)
{
	cout << "Please enter a selection: ";

	auto inputValue = GetInputValue();

	if (IsBackOrExitSelected(inputValue))
		return GetReturnItem(menu);

	auto menuItems = menu.GetMenuItems();

	return GetSelectedMenuItem(inputValue, menuItems);
}

string const MenuItemSelector::GetInputValue()
{
	string inputValue;

	cin >> inputValue;

	return inputValue;
}

bool const MenuItemSelector::IsBackOrExitSelected(const string& inputValue)
{
	return inputValue == "x" || inputValue == "X";
}

MenuItem* MenuItemSelector::GetReturnItem(Menu& menu)
{
	auto returnMenuItem = menu.GetReturnMenuItem();

	return
		returnMenuItem == nullptr
		? menu.GetNullMenuItem()
		: returnMenuItem;
}

MenuItem* const  MenuItemSelector::GetSelectedMenuItem(string const inputValue, vector<reference_wrapper<MenuItem>> const menuItems)
{
	for (auto menuItem : menuItems)
		if (menuItem.get().MatchesSelection(inputValue))
			return &menuItem.get();

	return nullptr;
}
