#include "stdafx.h"
#include "MenuItemSelector.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

MenuItem* MenuItemSelector::GetMenuItemSelection(Menu* menu)
{
	cout << "Please enter a selection: ";

	auto inputValue = GetInputValue();

	if (IsBackOrExitSelected(inputValue))
	{
		auto returnMenuItem = menu->GetReturnMenuItem();

		return 
			returnMenuItem == nullptr
			? menu->GetNullMenuItem()
			: returnMenuItem;
	}

	auto menuItems = menu->GetMenuItems();

	return GetSelectedMenuItem(inputValue, menuItems);
}

string MenuItemSelector::GetInputValue()
{
	string inputValue;

	cin >> inputValue;

	return inputValue;
}

bool MenuItemSelector::IsBackOrExitSelected(string inputValue)
{
	return inputValue == "x" || inputValue == "X";
}

MenuItem* MenuItemSelector::GetSelectedMenuItem(string inputValue, vector<MenuItem*> menuItems)
{
	for (auto it = menuItems.begin(); it < menuItems.end(); ++it)
		if ((*it)->MatchesSelection(inputValue))
			return *it;

	return nullptr;
}
