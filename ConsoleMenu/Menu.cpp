#include "stdafx.h"
#include "Menu.h"
#include "MenuPrinter.h"
#include "MenuItemSelector.h"
#include <iostream>
#include <memory>

void Menu::AddMenuItem(MenuItem& menuItem)
{
	menuItem.SetReturnMenuItem(this);
	menuItem.SetMenuItemValue(_menuValueCount++);

	_menuItems.emplace_back(menuItem);
}

void Menu::Execute()
{
	MenuItem* selectedMenuItem(nullptr);

	do
	{
		MenuPrinter::PrintMenu(*this);
		selectedMenuItem = MenuItemSelector::GetMenuItemSelection(*this);

		std::cout << std::endl;
		std::cout << std::endl;

	} while (selectedMenuItem == nullptr);
	
	selectedMenuItem->Execute();
}
